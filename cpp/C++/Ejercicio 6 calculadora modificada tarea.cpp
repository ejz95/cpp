#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Decalaracion de variables
    double a,b,resta,suma,divicion,multi;
    
    cout<<"Bienvenidos a la Calculadora modificada"<<endl;
    cout<<"Aviso importante la calculadora reconoce decimales"<<endl;
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<endl<<"Ingrese el valor de b: ";
    cin>>b;
   
   //operadores
   resta=a-b;
   suma=a+b;
   divicion=a/b;
   multi=a*b;
   
   
   //resultados
    cout<<endl<<"Los resultados de la operacion son: "<<endl;
    cout<<"La suma total de A+B es igual a: "<<suma<<endl;
    cout<<"La resta total de A-B es igual a: "<<resta<<endl;
    cout<<"La multiplicación total de A*B es igual a: "<<multi<<endl;
    cout<<"La divición total de A/B es igual a: "<<divicion<<endl;
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
