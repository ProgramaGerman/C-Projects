//Programa que determina la validez de ua tarjeta de credito
#include <iostream>
using namespace std;




int main(int argc, char const *argv[])
{
    string tarjeta = "4539148803436467";
    //paso 1:duplicar cada segundo digito desde derecha a izquierda
    //paso 2: si los numeros que duplicamos es mayor a 9, restarle 9
    //paso 3: sumar todos los numeros
    //paso 4: si el resultado es divisible entre 10, la tarjeta es valida

    int suma = 0;
    bool duplicar = false;
    for (int i = tarjeta.length() - 1; i >= 0; i--)
    {
        int digito = tarjeta[i] - '0';
        if (duplicar)
        {
            digito *= 2;
            if (digito > 9)
            {
                digito -= 9;
            }
        }
        suma += digito;
        duplicar = !duplicar;
    }
    if (suma % 10 == 0)
    {
        cout << "La tarjeta es valida" << endl;
    }else
    {
        cout << "La tarjeta es invalida" << endl;
    }
     
    return 0;
}
