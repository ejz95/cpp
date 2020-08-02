#include <cstdlib>
#include <iostream>

using namespace std;

string nombrecompleto(string nombre,string apellido)
{
     return nombre+"  "+apellido;
}
int main(int argc, char *argv[])
{
    string primernombre=" ";
    string primerapellido=" ";
    
    cout<<"Ingrese El primer nombre: ";
    cin>>primernombre;
    cout<<"Ingrese el primer apellido: ";
    cin>>primerapellido;
    
    cout<<endl;
    
    cout<<"Nombre completo: ";
    cout<<nombrecompleto(primernombre,primerapellido)<<endl;
    
 

    system("PAUSE");
    return EXIT_SUCCESS;
}
