#include <iostream>
#include <stdlib.h>

const int MAX = 3;

using namespace std;

int main(int argc, char const *argv[])
{


	int pila [MAX], tope = MAX, dato = 0,salida = 0, i = 0, extraido = 0;

	//Annadir un dato a la pila
	do{
	system("cls");

	cout<<"Ingrese un dato:";
	cin>>dato;

	if (tope < MAX)
		pila[i] = dato;
	else{


		cout<<"La pila esta llena"<<endl;
		system("cls");
		break;
	}

	if (tope != MAX)
	{
		cout<<"Desea agregar otro?: \nsi(1) no(0):";
		cin>>salida;
	}
		
	i++;
	tope++;
	}while(salida != 0 && tope < MAX);


	//Eliminar un dato de la pila
	i = tope;

	do
	{
		if (tope > 0)
		{
			extraido = pila[tope];
			pila[tope] = 0;
			tope--;
			cout<<"El dato: "<<extraido<<" ha sido eliminado"<<endl;


			cout<<"Eliminar otro dato?: si(1) no(0)"<<endl;
			cin>>salida;
		}
		else
		{
			cout<<"La pila esta vacia"<<endl;
		}


	} while (tope > 0 && salida != 0);



	i = 0;

/*
	cout<<"Mostrando datos....\n";

	while(i < MAX){
		if (i < MAX)		
			cout<<pila[i]<<endl;
		i++;
	}
*/
	
	
	return 0;
}