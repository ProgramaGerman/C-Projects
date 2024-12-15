
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int numCalif,*calif;

//Funciones de creacion del arreglo dinamico
void pedirNotas(){

    cout<<"Ingrese el numero de calificaciones:";
    cin>>numCalif;

    calif = new int[numCalif]; //Crea el arreglo

    for(int i = 0;i < numCalif; i++ ){
        cout<<"Ingrese una nota:";
        cin>>calif[i];
    }

}
void mostrarNotas(){

//Liberacion del arreglo dinamico
    cout<<"\nMostrando Notas....\n"<<endl;
    for(int i=0; i < numCalif; i++ ){
        cout<<calif[i]<<endl;
    }
}



//Metodo main
int main(){

pedirNotas();
mostrarNotas();


delete[] calif;
return 0;
}
