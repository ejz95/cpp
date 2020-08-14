#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
    srand(time(NULL));
    int sumar=0;
    
	int arreglo[5][5];
	
    //se añade datos
    for(int x=0;x<5;x++)//fila=x
    {
       for(int y=0;y<5;y++) //columnas =y
       {		
          arreglo[x][y]=rand()%3+1;  
          
       }           
          
    }        
	
	//muestra datos
	 for(int x=0;x<5;x++)//fila=x
    {
       for(int y=0;y<5;y++) //columnas =y
       {	
           cout<<" "<<arreglo[x][y]; 
      	    
	   }           
       cout<<endl;    
	}        
    // suma datos         
	for(int x=0;x<5;x++)
	{
		for(int y=0;y<5;y++)
		{
		   sumar=sumar+arreglo[x][y];		   	
		}
		
	}
	cout<<"La suma total es: "<<sumar<<endl;
	
	system ("Pause");
}
