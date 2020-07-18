#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int notas;
   
    cout<<"*******************************"<<endl;
    cout<<"Calificador de Notas 2.0"<<endl;
    cout<<"*******************************"<<endl;
    
    cout<<"Ingrese las notas: ";
    cin>>notas;
    
    if(notas<=100&& notas>=96)
    {
       cout<<"Felicidades Sacastes una A++"<<endl;   
       system("PAUSE");
       return 0;                      
    }
     if(notas<=95&& notas>=91)
    {
       cout<<"Felicidades Sacastes una A+ Sigues siendo bueno"<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=90&& notas>=86)
    {
       cout<<"Felicidades Sacastes una A Buena nota "<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=85&& notas>=81)
    {
       cout<<"Felicidades Sacastes una A- No esta nada mal"<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=80&& notas>=76)
    {
       cout<<"Sacastes una B+ Bien :)"<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=75&& notas>=71)
    {
       cout<<"Sacastes una B Sobre la media hay que mejorar"<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=70&& notas>=66)
    {
       cout<<"Sacastes una B- no bajes el promedio "<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=65&& notas>=61)
    {
       cout<<"Sacastes una C+ como la tabla del 9 ni muy facil, ni muy dificil"<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=60 && notas>=56)
    {
       cout<<"Sacastes una C hay que motivarse mas"<<endl;   
       system("PAUSE");
       return 0;
    }
     if(notas<=55&& notas>=51)
    {
       cout<<"Sacastes una C- Se fue el internet no fue mi culpa"<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas<=50&& notas>=46)
    {
       cout<<"Sacastes una D+ lo importante es pasar"<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas<=45&& notas>=41)
    {
       cout<<"Sacastes una D Casi pero fallastes y no, no te voy a dar puntos "<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas<=40&& notas>=36)
    {
       cout<<"Sacastes una D- malo como el juego en polvo y las sopas instantaneas "<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas<=35&& notas>=31)
    {
       cout<<"Sacastes una E+ no se me ocurrio nada "<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas<=30&& notas>=26)
    {
       cout<<"Sacastes una E Falta poco si entiendes lo que significa poco"<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas<=25&& notas>=21)
    {
       cout<<"Sacastes una E- deberias pensar en cambiarte de carrera"<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas<=20&& notas>=16)
    {
       cout<<"Sacastes una F+ Es lo unico positivo que veras"<<endl;   
       system("PAUSE");
       return 0;
    }
   
    if(notas<=15&& notas>=6)
    {
       cout<<"Sacastes una F No se como pero lo empeorastes ";   
       return 0;
    }
    if(notas<=5&& notas>=1)
    {
       cout<<"Sacastes una F- si te dijiera malo seria decir que fue bueno "<<endl;   
       system("PAUSE");
       return 0;
    }
    if(notas==0)
    {
       cout<<"Si fuera tu ni me molestaria en preguntar pero si quieres saber Sacastes una F--"<<endl;   
       system("PAUSE");
       return 0;   
    }
    if(notas>100||notas<0)
    {
     cout<<"Ingrese una nota valida";
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
