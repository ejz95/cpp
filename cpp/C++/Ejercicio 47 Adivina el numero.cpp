#include <iostream>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	int numeroSecreto=0;
	int miNumero=0;
	
	
	//inicializa el numero ramdonw
	srand(time(NULL));
	
	//genera un numero entre el 1 - 10
	
	numeroSecreto=rand()%10+1;
	
	do
	{   
	    cout<< "adivina el numero secreto del (1 al 10):  ";
		cin>> miNumero;
		
		if(numeroSecreto<miNumero)
		{
			cout<<"El numero secreto es menor"<<endl;
		
		}
		else
		{
			if(numeroSecreto>miNumero)
			{
			cout<<"El numero secreto es mayor"<<endl;
		
			}
		
		
		}
			
	
	
	}while(numeroSecreto!= miNumero);
	
	
	cout<<endl;
	
	
	
	return 0;
}
