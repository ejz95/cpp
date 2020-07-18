#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int nota=0;
   cout<<"Ingrese la Nota obtenida: ";
   cin>>nota;
   
   if(nota>=95 && nota <=100)
   { cout<<"Obtuviste una A";
     return 0;   
   }
    if(nota>=85 && nota <=94)
   { cout<<"Obtuviste una B";
     return 0;
   }
   
    if(nota>=75 && nota <=94)
   { cout<<"Obtuviste una C";
     return 0;
   } 
   if(nota>=65 && nota <=74)
   { cout<<"Obtuviste una D";
     return 0;
   }
    if(nota>60 && nota <=64)
   { cout<<"Obtuviste una E";
     return 0;
   }
   if(nota< 60)
   { cout<<"Obtuviste una F";
     return 0;
   }
   if(nota<0||nota>100)
   { cout<<"Nota ingresada no valdia";
   }
   
   
   
   
   
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
