#include <cstdlib>
#include <iostream>

using namespace std;

int sumar(int a, int b)
{
    return a+b;
} 
int restar(int a,int b)
 {
    return a-b;                    
 }
int main(int argc, char *argv[])
{
  int numero1=0;
  int numero2=0;
  
  cout<<"Ingrese el Valor de a: ";
  cin>>numero1;
  cout<<endl<<"Ingrese el Valor de b: ";
  cin>>numero2;
  
  cout<<endl;
  
  cout<<"Total de la Suma: "<<sumar(numero1, numero2)<<endl;
  cout<<"Total de Resta: "<<restar(numero2,numero2);
   
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
