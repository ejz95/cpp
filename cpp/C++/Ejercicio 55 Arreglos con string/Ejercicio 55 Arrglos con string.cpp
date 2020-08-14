#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int numeros[]={4,5,8,10};
    
    for(int i=0;i<4;i++)
    {
        cout<<numeros[i]<<endl;    
    }       
    string nombres[]={"Juan","maria","Pedro","Jose","Pablo"};    
    for(int i=0;i<5;i++)
    {
         cout<<nombres[i]<<endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
