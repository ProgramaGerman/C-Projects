//Programa que guarda datos en una cola circular
#include <iostream>

using namespace std;

struct colaCircular{
    int tamanno;
    int frente;
    int finalCola;
    int capacidad;
    int *cola;
};

void inicializarCola(colaCircular &c, int capacidad){
    c.tamanno = 0;
    c.frente = 0;
    c.finalCola = -1;
    c.capacidad = capacidad;
    c.cola = new int[capacidad];
}

void encolar(colaCircular &c, int n){
    if(c.tamanno == c.capacidad){
        cout << "La cola esta llena" << endl;
    }else{
        c.cola[c.finalCola] = n;
        c.finalCola = (c.finalCola + 1) % c.capacidad;
        c.tamanno++;
    }
}

void desencolar(colaCircular &c){
    if(c.tamanno == 0){
        cout << "La cola esta vacia" << endl;
    }else{
        c.frente = (c.frente + 1) % c.capacidad;
        c.tamanno--;
    }
}

void mostrarCola(colaCircular c){
    for(int i = 0; i < c.tamanno; i++){
        cout << c.cola[(i + c.frente) % c.capacidad] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    colaCircular c;

    inicializarCola(c, 5);

    encolar(c, 1);
    encolar(c, 2);
    encolar(c, 3);

    desencolar(c);

    mostrarCola(c);

    
    return 0;
}
