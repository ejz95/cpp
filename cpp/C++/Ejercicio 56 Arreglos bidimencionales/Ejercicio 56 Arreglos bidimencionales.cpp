#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string nombres[5][3];
    nombres[0][0]="Juan";
    nombres[0][1]="Perez";
    nombres[0][2]=">:)";//prueba con m�s filas 
    
    nombres[1][0]="maria";
    nombres[1][1]="martinez";
    nombres[1][2]=":D";//prueba con m�s filas 
    
    nombres[2][0]="Pedro";
    nombres[2][1]="Jimenez";
    nombres[2][2]=":(";//prueba con m�s columnas 
    
    nombres[3][0]="Thomas";
    nombres[3][1]="El tren"; 
    nombres[3][2]=":*";//prueba con m�s columas 
    
    nombres[4][0]="Dino";
    nombres[4][1]="Espumoni";    
    nombres[4][2]=":�)";//prueba con m�s columas
    
  //forma sencilla  
  //  for(int i=0;i<5;i++)
   // {
     //  cout<<nombres[i][0]<<" "<<nombres[i][1]<<" "<<nombres[i][2]<<endl;     
       
    //}        
    
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<3;j++)
       { 
        cout<<nombres[i][j]<<" ";     
       }
       cout<<endl;
    }        
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
