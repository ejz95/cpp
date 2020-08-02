#include<iostream>
using namespace std;

double subtotal;
string listasProductos;

void agregarProductos(string descripcion,int cantidad,double precio)
{
     listasProductos=listasProductos+descripcion+'\n';
     subtotal=subtotal+(cantidad*precio);    

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
	cout<<"Subtotal: "<<subtotal;
	cout<<endl;
	cout<<endl;
	system("pause");
}  
