#include <stdlib.h>
#include <iostream>
#include <time.h >

using namespace std;

int main(int argc, char *argv[])
{
    int numero = 0;
    
    //inicializa el numero random
    srand(time(NULL));
    
    //genera un numero entre 1 - 10
    for(int i=0;i<=20;i++)
    {
    numero=rand()%5+1;
    cout<<"Primer numero al alzar: "<<numero<<endl;
    
    }
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
