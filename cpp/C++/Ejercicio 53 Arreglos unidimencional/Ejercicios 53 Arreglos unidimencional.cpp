#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //declaración de valores
    int numero[5];
    
    //asignación de valores unidimencional
    numero[0]=10;
    numero[1]=5;
    numero[2]=7;
    numero[3]=50;
    numero[4]=2;
    
    //lectura de los valores de un arreglo unidimencional
    cout<<numero[0]<<endl;
    cout<<numero[1]<<endl;
    cout<<numero[2]<<endl;
    cout<<numero[3]<<endl;
    cout<<numero[4]<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
