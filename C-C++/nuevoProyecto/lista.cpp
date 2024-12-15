#include <iostream>
#include <stdlib.h>
using namespace std;

struct lista {
    int dato;
    lista *siguiente;
} *cab = NULL, *Aux = NULL, *aux1 = NULL;

void crearNodo();
void mostrarLista();



int main(int argc, char const *argv[]) {
    int op;
    do {
        cout << "Listas en C++\n Ingrese una opcion:\n 1: Insertar dato: \n 2: Mostrar Lista \n 3: Salir\n opcion:";
        cin >> op;
        switch (op) {
            case 1:
                crearNodo();
                break;
            case 2:
                mostrarLista();
                break;
            case 3:
                cout << "Adios...." << endl;
                system("pause");
                break;
            default:
                cout << "Valor invalido." << endl;
                break;
        }
    } while (op != 3);
    return 0;
}

void crearNodo() {
    int op;
    do {
        system("cls");
        Aux = new lista;
        cout << "Ingrese el dato:";
        cin >> Aux->dato;
        Aux->siguiente = NULL;
        if (cab == NULL) {
            cab = Aux;
        } else {
            aux1->siguiente = Aux;
        }
        aux1 = Aux;
        cout << "Desea agregar otro dato:\n any numero:si o 0:no :";
        cin >> op;
    } while (op != 0); // Cambié "op != 1" por "op != 0"
}

void mostrarLista() {
    if (cab != NULL) {
        for (Aux = cab; Aux != NULL; Aux = Aux->siguiente) {
            cout << Aux->dato << " -> ";
        }
        cout << "NULL" << endl; // Para indicar el final de la lista
    } else {
        cout << "La Lista esta vacia" << endl;
    }
}
