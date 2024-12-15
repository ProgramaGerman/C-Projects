#include <iostream>

using namespace std;


int factorial(int num){
    return (num == 0)? 1 : num * factorial(num - 1);
}

int main(int argc, char const *argv[])
{
	int num, op;
    do
    {
        cout<<"Indique un numero:";cin>>num;
        cout<<"\nEl factorial de " << num << " es: " << factorial(num) << endl;
        cout<<"\nOtro Numero? \n1:si\n2:no\nop:";cin>>op;
    } while (op != 2);
    
	return 0;
}