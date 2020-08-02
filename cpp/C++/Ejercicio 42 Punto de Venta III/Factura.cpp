#include<iostream>
using namespace std;

double subtotal;
string listasProductos;

void agregarProductos(string descripcion,int cantidad,double precio)
{
     listasProductos=listasProductos+descripcion+'\n';
     subtotal=subtotal+(cantidad*precio);    

}     
