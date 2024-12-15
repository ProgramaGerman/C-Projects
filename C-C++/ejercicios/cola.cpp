
#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};
//prototype
void menu();
void agregarCola(Nodo *&, Nodo *&, char);
void sacarCola(Nodo *&,Nodo *&, char &);
bool colaVacia(Nodo *);

int main(){

    menu();

    getch();

    return 0;
}

void menu(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int opcion = 0;
    char valor = ' ';

    do{
        cout<<"\n\nIngrese una opcion: \n 1. Ingresar un elemento a la cola \n 2. Mostrar los elementos de la cola\n 3. Salir"<<endl;
        cout<<"opcion:";
        cin>> opcion;

        switch(opcion){
        case 1:
            cout<<"\nIngresa el elemento a la cola:";
            cin>>valor;
            agregarCola(frente,fin,valor);
            system("cls");
            break;
        case 2:
            cout<<"\nVaciando la cola....\n"<<endl;
            while(frente != NULL){
                sacarCola(frente,fin,valor);
                if(frente != NULL){
                    cout<<valor<<",";
                }else{
                    cout<<valor<<"."<<endl;
                }
            }
            break;
        case 3:
            cout<<"saliendo..."<<endl;
            delete frente;
            delete fin;
            break;
        default:
            cout<<"Ingrese una opcion valida"<<endl;
            break;
        }

    }while(opcion != 3);


}

bool colaVacia(Nodo *frente){
    return (frente == NULL)? true : false;
}

void sacarCola(Nodo *&frente, Nodo *&fin, char &n){
    n = frente->dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente->siguiente;
    }

    delete aux;
}

void agregarCola(Nodo *&frente, Nodo*&fin, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(colaVacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}


