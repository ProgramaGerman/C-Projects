#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarLista(Nodo *&, int);
bool vacio(Nodo *&);


int main(){
    Nodo *Lista, *Aux = NULL;
    int dato , i = 0;


    for(int i = 0; i < 4; i ++){
        cout<<"Ingrese un Dato:";
        cin>>dato;

        agregarLista(Lista,dato);
        cout<<"Elemento numero:"<<dato<<" agregado"<<endl;
        cout<< Lista->dato<<endl;

        system("pause");
        system("cls");
    }

    Aux = Lista;
    while(Aux != NULL){
        i += 1;
        cout<<"Elemento num:"<<i<<": "<<Aux->dato<<endl;
        Aux = Aux->siguiente;
    }

    system("pause");
    system("cls");

    delete Lista;
    delete Aux;



getch();
return 0;
}

void agregarLista(Nodo *&Lista, int dato){
    Nodo *n_Nodo = new Nodo;
    n_Nodo->dato = dato;
    n_Nodo->siguiente = NULL;

    if(vacio(Lista)){
        Lista = n_Nodo;
    }
    cout<<Lista->dato;
    Lista->siguiente = NULL;

}


bool vacio(Nodo *&Lista){
return (Lista == NULL)? true : false;
}
