#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int sumar(int a, int b)
{
	int resultado;
	resultado=a+b;
	return resultado;

}

void sumarConValoresPorReferencia(int a, int b, int &resultado)
{
	
	resultado=a+b;

}

int main(int argc, char** argv) 
{
	int num1=5;
	int num2=7;
	int r=0;

	
	sumarConValoresPorReferencia(num1, num2,r);
	
	cout<<r;
	return 0;
}
