#include<iostream>
using namespace std;

double subtotal,isv,totalPagar;
string listasProductos;

void agregarProductos(string descripcion,int cantidad,double precio)
{
     listasProductos=listasProductos+descripcion+'\n';
     subtotal=subtotal+(cantidad*precio);    
	 isv=subtotal*0.15;
	 totalPagar=subtotal+isv;
	 	


}   

void imprimirfactura()
{
	system("cls");
	cout<<"*******"<<endl;
	cout<<"Factura"<<endl;
	cout<<"*******"<<endl;
	cout<<endl;
	
	cout<<"Productos: "<<endl;
	cout<<listasProductos;
	
	cout<<endl;
	cout<<"*********"<<endl;
	cout<<"Subtotal: "<<subtotal;
	cout<<endl;
	cout<<"*********"<<endl;
	cout<<"ISV: "<<isv;
	cout<<endl;
	cout<<"*********"<<endl;
	cout<<"Total a Pagar: "<<totalPagar<<endl;
	system("pause");
}  
