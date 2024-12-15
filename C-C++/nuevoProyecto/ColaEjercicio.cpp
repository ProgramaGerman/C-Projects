#include <iostream>
#include <cstdlib> // Para usar system()

using namespace std;

int main(int argc, char const *argv[])
{
    const int MAX = 5;
    int cola[MAX], inicio = 0, fin = 0, op = 0;

    do {
        // Limpiar la pantalla
        system("clear"); // Usa "cls" si estás en Windows

        cout << "Menu de opciones:" << endl;
        cout << "1: Push" << endl;
        cout << "2: Pop" << endl;
        cout << "3: Mostrar elemento de la cola" << endl;
        cout << "4: Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch (op) {
            case 1: // Push
                if (fin < MAX) {
                    int elemento;
                    cout << "Ingrese el elemento a agregar: ";
                    cin >> elemento;
                    cola[fin] = elemento;
                    fin++;
                    cout << "Elemento agregado." << endl;
                } else {
                    cout << "La cola esta llena." << endl;
                }
                break;

            case 2: // Pop
                if (inicio < fin) {
                    cout << "Elemento eliminado: " << cola[inicio] << endl;
                    inicio++;
                } else {
                    cout << "La cola esta vacia." << endl;
                }
                break;

            case 3: // Mostrar elemento de la cola
                if (inicio < fin) {
                    cout << "Elementos en la cola: ";
                    for (int i = inicio; i < fin; i++) {
                        cout << cola[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "La cola esta vacia." << endl;
                }
                break;

            case 4: // Salir
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

        // Esperar a que el usuario presione una tecla antes de limpiar la pantalla y volver al menú
        if (op != 4) {
            cout << "Presione Enter para continuar...";
            cin.ignore(); // Ignorar el salto de línea residual
            cin.get(); // Esperar a que el usuario presione Enter
        }

    } while (op != 4);

    return 0;
}
