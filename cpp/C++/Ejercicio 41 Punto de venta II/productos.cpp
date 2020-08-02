#include <iostream>

using namespace std;

void productos(int opcion)
{
    
     system("cls");
     switch(opcion)
     {
     case 1:
     {   
         cout<<"*****************"<<endl;
         cout<<"Bebidas Calientes"<<endl;
         cout<<"*****************"<<endl;
         system("pause");
         break;           

     }
     case 2:
     {   
         cout<<"*************"<<endl;
         cout<<"Bebidas Frias"<<endl;
         cout<<"*************"<<endl;
         system("pause");
         break;           

     }
     case 3:
     {   
         cout<<"**********"<<endl;
         cout<<"Reposteria"<<endl;
         cout<<"**********"<<endl;
         system("pause");
         break;           

     }
     default:
         break;    
     }              
     
}  
