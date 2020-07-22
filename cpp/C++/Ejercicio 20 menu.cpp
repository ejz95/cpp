#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int opcion =0;
   cout<<"****"<<endl;
   cout<<"menu"<<endl;
   cout<<"****"<<endl;
   
    while(true)
    {     
       cout<<endl;
       cout<<"1- Cafe y Granitas"<<endl;
       cout<<"2- Reposteria"<<endl;
       cout<<"0-Salir"<<endl;
   
       cout<<"Ingrese una opcion del menu "<<endl;
       cin>>opcion;
    
  
       if(opcion==1)
       {
         system("cls");
         cout<<"Estas en el menu de cafe y granitas"<<endl;
         system("pause");
       }
   
       if(opcion==2)
      {
          system("cls");
          cout<<"Estas en el menu de Reposteria"<<endl;
          system("pause");
      }
       if(opcion==0)
     { 
        break;
     }
  
  } 
    system("PAUSE");
    return EXIT_SUCCESS;
}
