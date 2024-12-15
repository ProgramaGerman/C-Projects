
/*#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo{
int dato;
Nodo *siguiente;
};

//prototypes
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&, int &);


int main(){
    Nodo *pila = NULL;

     //Ingresar datos
    int dato = 1;

    while(dato != 0){
        cout<<"Ingrese el dato :";
        cin>>dato;
        if(dato != 0){
            agregarPila(pila,dato);
            cout<<"Guardando..."<<endl;
            cout<<"Se ha agregado "<<dato<<" a la pila"<<endl;
        }
    }

    cout<<"\nImprimiendo...."<<endl;
    cout<<"Pila:";
    while(pila != NULL){
        if(pila->siguiente != NULL){
                cout<<pila->dato<<",";
        }else{
                cout<<pila->dato<<".";
        }
        pila = pila->siguiente;
    }


    cout<<"\nProceso de eliminacion...\n"<<endl;


     while(pila != NULL){
       sacarPila(pila,dato);
        if(pila != NULL){
            cout<<"Pila:"<<dato<< ",";
        }else{
            cout<<dato<<"."<<endl;
        }
    }

    getch();
    return 0;
}


//Agregar Pila
void agregarPila(Nodo *&pila,int n){


    Nodo *NuevoNodo = new Nodo();
    NuevoNodo->dato = n;
    NuevoNodo->siguiente = pila;
    pila = NuevoNodo;
}

 //Eliminar elemento de la pila
void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;

}
*/
