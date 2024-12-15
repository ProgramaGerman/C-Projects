
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
    Nodo *lista = NULL;
    int dato, i = 0;

    do{
    cout<<"Ingresa un dato:";
    cin>>dato;


    agregarLista(lista,dato);


    system("cls");
    i++;
    }while(i != 3);

    getch();
    return 0;
}

bool vacio(Nodo *&Lista){
    return (Lista == NULL)? true : false;
}

void agregarLista(Nodo *&Lista, int dato){
    Nodo *Nuevo_nodo = new Nodo();
    Nuevo_nodo->dato = dato;
    if(vacio(Lista)){
        Lista = Nuevo_nodo;
    }
    Lista->siguiente = NULL;
}
