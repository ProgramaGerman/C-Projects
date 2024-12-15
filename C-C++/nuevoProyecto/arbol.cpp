#include<iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *izq;
    Nodo *der;
};

Nodo* insertar( int nuevo_dato){
    Nodo* nuevo = new Nodo();
    nuevo->dato = nuevo_dato;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;

    int hijo_izquierdo, hijo_derecho;
    cout<<"Ingrese cantidad de hijo izquierdo:";cin>> hijo_izquierdo;
    cout<<"Ingrese cantidad de hijo derecho:";cin>> hijo_derecho;
    
}
     

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
