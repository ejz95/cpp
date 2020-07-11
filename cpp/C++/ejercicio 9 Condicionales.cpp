#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int numero=0;
	int numerosecreto=0;
	cout<< "Ingrese Un numero: ";
	cin>>numero;
	
	cout<<endl;
	if(numero==numerosecreto)
	{
		cout<<"Adivinastes el numero Secreto: "<<numero;	
	}
	else
	{
		cout<<"No adivinaste, fallastes ";
	}
	
	cout<<"Ingresastes el numero: "<< numero;
	
	





	return 0;
}
