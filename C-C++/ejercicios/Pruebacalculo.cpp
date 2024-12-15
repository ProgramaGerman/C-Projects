#include <iostream>

using namespace std;

class persona{
private:
	string nombre;
	int edad;

public:
	persona(string nombre, int edad){
		this->nombre = nombre;
		this->edad = edad;
	}

	string mostrar(){
		return nombre + edad;
	}
}


int main(int argc, char const *argv[])
{
	persona persona1 = new persona("German", 20);

	persona1.mostrar();
	return 0;
}