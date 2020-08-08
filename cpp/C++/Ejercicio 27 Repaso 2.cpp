#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int opcion;
    
    
    
    while(true)
    {
         cout<<"****";
         cout<<"menu";          
         cout<<"****";
         cout<<endl<<endl;
         cout<<"1 - Bebidas Calientes"<<endl;
         cout<<"2 - Bebidas Heladas"<<endl;
         cout<<"3 - Reposteria"<<endl;
         
         cout<<endl;
         cout<<"Ingrese una Opcion entre 1 - 3: ";
         cin>>opcion;
         
         if(opcion==0)
         {
            break;          
         }if(opcion==1)
          {
             system("cls");
             cout<<"***************"<<endl;
             cout<<"Bebidas Heladas"<<endl;
             cout<<"***************"<<endl;
             
             system("pause");          
          }                             
          if(opcion==2)
          {
             system("cls");
             cout<<"***************"<<endl;
             cout<<"Bebidas Calientes"<<endl;
             cout<<"***************"<<endl;
             
             system("pause");          
          }                             
          if(opcion==1)
          {
             system("cls");
             cout<<"***************"<<endl;
             cout<<"Reposteria"<<endl;
             cout<<"***************"<<endl;
             
             system("pause");          
          }                             
          if(opcion<0||opcion>3)
          {
             system("cls");
             cout<<"***********************"<<endl;
             cout<<"Elija una opcion valida"<<endl;
             cout<<"***********************"<<endl;
             
             system("pause");          
          }                             
    }               
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
