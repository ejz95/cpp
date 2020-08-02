#include <cstdlib>
#include <iostream>

using namespace std;
int sumar()
{
    return 5+7;}
string NombreCompleto()
{
    string nombre="Juan";
    string apellido ="Perez";
    return nombre+" "+apellido;   
}

int main(int argc, char *argv[])
{
    int resultado=sumar();
    string nombreyApellido=NombreCompleto();
    cout<<resultado; 
    cout<<endl;
    cout<<resultado;
    cout<<endl;
    cout<<nombreyApellido;
    cout<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
