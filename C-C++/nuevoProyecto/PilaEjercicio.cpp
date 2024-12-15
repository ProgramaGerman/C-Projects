#include <iostream>

using namespace std;


void push();
void pop();
void showtop();
bool pilaVacia();
bool pilaLlena();

const int MAX = 3;int tope = -1, pila [MAX];

int main(int argc, char const *argv[])
{
	int op = 0;

	//No hay necesidad de Inicializar la pila los valores de la pila,
	//ya que se le dan los valores en tiempo de ejecucion, y no deja valores basura.

	//Tip: se uso el system para manejar la pantalla, es decir, pausar y para limpiar la pantalla.
	//para mejor vista para el usuario :)

	do{
		cout<<"Menu: \n 1:Agregar \n 2:Eliminar \n 3:Mostrar Tope \n 4:Salir\nopcion:";cin>>op;cout<<"\n";
		switch(op){
			case 1:{push(); break;}
			case 2: pop();break;
			case 3: showtop();break;
			case 4: cout<<"Adios...\n";break;
			default:{cout<<"\nDato Invalido....";
			system("pause");
			system("cls");
			break;
			}

	}

	}while(op != 4);/*Para mejorar la legibilidad, se usa op != 4 para decir que con 4,
	 sale del programa, ya que la otra opcion, saldria inmediatamente si escoge otro numero
	diciendo valor invalido.
	*/
	return 0;
}

bool pilaVacia(){
	return (tope == -1)? true:false;//Se encontro que se comparaba con 1, cometiendo un error.
	//con el if ternario hace lo mismo que el if comun, solo que se escribe en una sola linea de codigo.
}

bool pilaLlena(){
	return (tope == (MAX - 1))? true:false;
	//con el if ternario hace lo mismo que el if comun, solo que se escribe en una sola linea de codigo.
}

void push(){
	if (!pilaLlena()){
		cout<<"\nValor por favor:";cin>>pila[++tope];
		cout<<"\nEl dato:"<<pila[tope]<<" ha sido Guardado\n\n";
		system("pause");
		system("cls");
	}
	else{
		cout<<"\nLa pila esta llena....."<<endl;
		system("pause");
		system("cls");
	}

}

void pop(){
//No hay necesidad de comparar la funcion con un true o false, es redundancia
//el if toma el valor que devuelve la funcion, true o false..
	if (pilaVacia())
	{
		cout<<"\nLa pila esta Vacia....."<<endl;
		system("pause");
		system("cls");
	}else{
		int dato = pila[tope];
		pila[tope] = 0;
		cout<<"\nDato:"<<dato<<" Eliminado...\n\n";
		system("pause");
		system("cls");
		tope -= 1;
	}

}

void showtop(){
	cout<<"\nvalor de Tope:"<<pila[tope]<<endl;
	system("pause");
	system("cls");
}


