#include <iostream>

using namespace std;

extern void agregarProductos(string descripcion, int cantidad,double precio);

void productos(int opcion)
{
    
     system("cls");
     int opcionProducto=0;
     switch(opcion)
     {
     case 1:
     {   
              cout<<"*****************"<<endl;
              cout<<"Bebidas Calientes"<<endl;
              cout<<"*****************"<<endl<<endl;      
              cout<<"1 - Capuccino"<<endl;
              cout<<"2 - Expresso"<<endl;
              
              cin>>opcionProducto; 
              
              switch(opcionProducto)      
              {
              case 1:
                   agregarProductos("capuccino",1,40);
                   break;                    
              case 2:
                   agregarProductos("Expresso",1,30);
                   break; 
              
              default:
                 {
					 cout<<"Opcion no valida";
                     return;
			     }  		 break;
            }                            
           
		    cout<<endl;
			cout<<"Producto Agregado"<<endl<<endl;
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
