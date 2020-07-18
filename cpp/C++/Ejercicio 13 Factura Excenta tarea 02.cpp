#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 
{
	double subtotal=0;
	double total=0;
	double impuesto=0.15;
	int  descuento=0;
	double calculoDescuento=0;
	double calculoImpuesto;
    int excenta;
	
    
    cout<< "Bienvenidos al sistema de facturas"<<endl;
	cout<< "Su factura Esta Excenta"<<endl;
	cout<<"Preciona 1 para si y 2 para no: ";
    cin>>excenta;

	if(excenta == 1 )
    {
    cout<<"***********************"<<endl;
    cout<< "Ingrese el Subtotal de la factura: ";
	cin>>subtotal;
	
	cout<<"Ingrese el descuento (0, 10, 15, 20: ";
	cin>> descuento;
	
	calculoDescuento = (subtotal*descuento)/100;
	
	total=subtotal-calculoDescuento;
	cout<<endl;
	cout<<"Total a Pagar es: "<<total;
    system("PAUSE");
    }
	
	if(excenta == 2)
    {
	cout<<"***********************"<<endl;
    cout<< "Ingrese el Subtotal de la factura: ";
	cin>>subtotal;
	
	cout<<"Ingrese el descuento (0, 10, 15, 20: ";
	cin>> descuento;
	
	calculoDescuento = (subtotal*descuento)/100;
	calculoImpuesto=(subtotal-calculoDescuento)*0.15;
	total=subtotal-calculoDescuento+calculoImpuesto;
	
	cout<<endl;
	cout<<"Total a Pagar es: "<<total;
    system("PAUSE");
    }
   	if(excenta !=1 || excenta!=2)
    {
	cout<<"***********************"<<endl;
    cout<<"Opcion no valida";
    system("PAUSE");
    }
    system("PAUSE");
    return EXIT_SUCCESS;
 }

