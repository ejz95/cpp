#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	//entrada de datos
	double subtotal=0;
	double total=0;
	double isv =0.15;
	double isv1=0;
	
	cout<<"Ingrese el subtotal de la Factura: ";
	cin>>subtotal;
	 // proceso
	total=subtotal+(subtotal*isv);
	isv1=(subtotal*isv);
	// salida
	cout << endl;
	cout<<"Total de Isv: Lps"<< isv1;
	cout << endl;
	cout<<"Total a pagar es: Lps "<<total;

	return 0;
}
