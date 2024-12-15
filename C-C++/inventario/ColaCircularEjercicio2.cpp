#include <iostream>

struct ColaCircular {
    int* cola;          // Arreglo para almacenar los elementos de la cola
    int capacidad;      // Capacidad máxima de la cola
    int frente;         // Índice del frente de la cola
    int atras;          // Índice del final de la cola
    int tamaño;         // Número actual de elementos en la cola
};

// Inicializa la cola circular
void inicializarCola(ColaCircular& c, int capacidad) {
    c.capacidad = capacidad;
    c.cola = new int[capacidad];
    c.frente = 0;
    c.atras = -1;
    c.tamaño = 0;
}

// Libera la memoria utilizada por la cola
void liberarCola(ColaCircular& c) {
    delete[] c.cola;
}

// Método para agregar un elemento a la cola
void encolar(ColaCircular& c, int valor) {
    if (c.tamaño == c.capacidad) {
        std::cout << "La cola esta llena. No se puede agregar el elemento: " << valor << std::endl;
        return;
    }
    c.atras = (c.atras + 1) % c.capacidad; // Mover el índice atrás de forma circular
    c.cola[c.atras] = valor;
    c.tamaño++;
}

// Método para eliminar un elemento de la cola
void desencolar(ColaCircular& c) {
    if (c.tamaño == 0) {
        std::cout << "La cola esta vacia. No se puede desencolar." << std::endl;
        return;
    }
    c.frente = (c.frente + 1) % c.capacidad; // Mover el índice frente de forma circular
    c.tamaño--;
}

// Método para obtener el elemento en el frente de la cola
int obtenerFrente(ColaCircular& c) {
    if (c.tamaño == 0) {
        std::cout << "La cola esta vacia." << std::endl;
        return -1; // Valor de error
    }
    return c.cola[c.frente];
}

// Método para verificar si la cola está vacía
bool estaVacia(ColaCircular& c) {
    return c.tamaño == 0;
}

// Método para verificar si la cola está llena
bool estaLlena(ColaCircular& c) {
    return c.tamaño == c.capacidad;
}

// Método para obtener el tamaño actual de la cola
int obtenerTamaño(ColaCircular& c) {
    return c.tamaño;
}

int main() {
    ColaCircular cola; // Crear una estructura para la cola circular
    inicializarCola(cola, 5); // Inicializar la cola con capacidad para 5 elementos

    // Probar encolar elementos
    encolar(cola, 10);
    encolar(cola, 20);
    encolar(cola, 30);
    
    std::cout << "Elemento en el frente: " << obtenerFrente(cola) << std::endl;

    // Desencolar un elemento
    desencolar(cola);
    
    std::cout << "Elemento en el frente despues de desencolar: " << obtenerFrente(cola) << std::endl;

    // Agregar más elementos
    encolar(cola, 40);
    encolar(cola, 50);
    encolar(cola, 60); // Esto debería mostrar que la cola está llena

    // Mostrar el tamaño actual de la cola
    std::cout << "Tamaño actual de la cola: " << obtenerTamaño(cola) << std::endl;

    liberarCola(cola); // Liberar memoria al final

    return 0;
}
