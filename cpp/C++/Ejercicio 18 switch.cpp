#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int opcion=0;
    cout<<"ingrese una opcion: ";
    cin>>opcion;
    
    switch(opcion)
    {
      case 1:
         { 
           cout<< "Escogiste 1"<<endl;
           break;              
         } 
      case 2:
         {
           cout<< "Escogiste 2"<<endl;
           break;  
         }        
      case 3:
         {
           cout<< "Escogiste 3"<<endl;
           break;  
         }      
      default:
         {   
            cout<<"Ingrese una opcion del 1 al 3";              
            break;
         }      
    } 
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
