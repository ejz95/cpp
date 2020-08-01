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
              cout<<"1 - Capuccino = 40 C/U"<<endl;
              cout<<"2 - Expresso = 30 C/U"<<endl;
              cout<<"3 - Late = 20 C/U "<<endl;
              cout<<"4 - Cafe simple = 10 C/U "<<endl;
			  cout<<"5- Retornar al Menu Principal"<<endl;
			  cout<<endl;
              
              cout<<"Ingrese una Opcion: ";
              cin>>opcionProducto; 
              
              switch(opcionProducto)      
              {
              case 1:
                   agregarProductos("1 capuccino - L 40.00",1,40);
                   break;                    
              case 2:
                   agregarProductos("2 Expresso - L 30.00",1,30);
                   break; 
              case 3:
                   agregarProductos("3 Late - L 20.00",1,20);
                   break;
              case 4:
                   agregarProductos("4 Cafe simple - L 10.00",1,10);
                   break;   
               case 5:
                   void menu();
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
         	cout<<"*************"<<endl<<endl;
         	cout<<"1 -Granita de cafe = 40 C/U"<<endl;
            cout<<"2 - Raspado Jumbo = 35 C/U"<<endl;
            cout<<"3 - Te frio = 30 C/U "<<endl;
            cout<<"4 - Refresco  = 20 C/U "<<endl;
			cout<<"5 - Retornar al Menu Principal"<<endl;
			cout<<endl;
        
              cout<<"Ingrese una Opcion: ";
              cin>>opcionProducto; 
              
              switch(opcionProducto)      
              {
              case 1:
                   agregarProductos("1 - Granita de cafe - L 40.00",1,40);
                   break;                    
              case 2:
                   agregarProductos("2 - Raspado - L 35.00",1,35);
                   break; 
              case 3:
                   agregarProductos("3 - Te frio - L 30.00",1,30);
                   break;
              case 4:
                   agregarProductos("4 - Refresco - L 20.00",1,20);
                   break;   
               case 5:
                   void menu();
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
     case 3:
     {   
         cout<<"**********"<<endl;
         cout<<"Reposteria"<<endl;
         cout<<"**********"<<endl<<endl;
         
		
              cout<<"Ingrese una Opcion: ";
              cin>>opcionProducto; 
              
              switch(opcionProducto)      
              {
              case 1:
                   agregarProductos("1 Pastel  - L 40.00",1,40);
                   break;                    
              case 2:
                   agregarProductos("2 Flan  - L 30.00",1,30);
                   break; 
              case 3:
                   agregarProductos("3 Gelatina - L 35.00",1,35);
                   break;
              case 4:
                   agregarProductos("4 Donas - L 15.00",1,15);
                   break;   
              case 5:
                   void menu();
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
     default:
     	cout<<"Opcion no valida";
         break;    
     }              
     
}  
