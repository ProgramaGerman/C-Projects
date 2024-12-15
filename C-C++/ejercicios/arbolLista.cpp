#include <iostream>

using namespace std;

struct raiz {
    int dato;
    raiz* hijo; // Puntero al primer hijo
    raiz* siguiente; // Puntero al siguiente hermano
};

raiz* agregarHijo(raiz* padre, int dato) {
    raiz* nuevoHijo = new raiz{dato, nullptr, nullptr};
    if (padre->hijo == nullptr) {
        padre->hijo = nuevoHijo;
    } else {
        raiz* aux = padre->hijo;
        while (aux->siguiente != nullptr) {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevoHijo;
    }
    return nuevoHijo;
}


void mostrarRaiz(raiz* raiz, int nivel = 0) {
    if (raiz == nullptr) return;
    for (int i = 0; i < nivel; ++i) cout << "   ";
    cout << raiz->dato << endl;
    mostrarRaiz(raiz->hijo, nivel + 1); // Recorrer hijos
    mostrarRaiz(raiz->siguiente, nivel); // Recorrer hermanos
}

void liberarArbol(raiz* raiz) {
    if (raiz == nullptr) return;
    liberarArbol(raiz->hijo);
    liberarArbol(raiz->siguiente);
    delete raiz;
}

int main() {
    raiz* raizPrincipal = new raiz{0, nullptr, nullptr}; // Inicialización
    int dato, opcion;

    cout << "Valor para la raiz: ";
    cin >> dato;
    raizPrincipal->dato = dato;

    do {
        cout << "Quiere agregar un hijo a la raiz? (1: si, 0: no): ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Valor para el hijo: ";
            cin >> dato;
            agregarHijo(raizPrincipal, dato);
        } else if (opcion != 0) {
            cout << "Opción incorrecta." << endl;
        }
    } while (opcion != 0);

    cout << "\nMostrando el árbol:\n";
    mostrarRaiz(raizPrincipal);

    liberarArbol(raizPrincipal);
    return 0;
}

