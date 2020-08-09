#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

void raiz()
{
     //variables
     double r;
     double x;
     
     cout<<"Ingrese el numero para sacar la raiz Cuadrada: ";   
     cin >> x;  
     if(x>=0)
     {
        r=sqrt(x);
        cout<<endl<<"El resultado es: "<<r<<endl; 
     }
     else
     {
         cout<<"No se puede hacer la operacion con numeros negativos";
     }       
}    

int main(int argc, char *argv[])
{           
                            
       raiz();
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
