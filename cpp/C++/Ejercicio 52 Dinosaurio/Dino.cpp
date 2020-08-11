#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void getup()
{
    system("cls");
    gotoxy(10,2);
    cout<<"Presione X para salir, Presione barra espaciadora para saltar";
    gotoxy(62,2);
    cout<<"SCORE :  ";
    gotoxy(1,25);
    for(int x=0;x<79;x++)
    cout<<"ß";
}
 
int t,speed=40;
void ds(int jump=0)
{
    static int a=1;
 
    if(jump==0)
        t=0;
    else if(jump==2)
        t--;
    else t++;
    gotoxy(2,15-t);
    cout<<"                  ";
    gotoxy(2,16-t);
    cout<<"          ÜÛßÛÛÛÛÜ";
    gotoxy(2,17-t);
    cout<<"          ÛÛÛÛÛÛÛÛ";
    gotoxy(2,18-t);
    cout<<"          ÛÛÛÛÛßßß";
    gotoxy(2,19-t);
    cout<<" Û        ÜÛÛÛÛßßß ";
    gotoxy(2,20-t);
    cout<<"  ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(2,21-t);
    cout<<"  ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(2,22-t);
    cout<<"    ßÛÛÛÛÛÛÛß     ";
    gotoxy(2,23-t);
    if(jump==1 || jump==2){
    cout<<"     ÛÛß ßÛ       ";
    gotoxy(2,24-t);
    cout<<"    ÛÜ   ÛÜ       ";
    }else if(a==1)
    {
    cout<<"     ßÛÛß  ßßß    ";
    gotoxy(2,24-t);
    cout<< "      ÛÜ         ";
    a=2;
    }
    else if(a==2)
    {
    cout<<"      ßÛÜ ßÛ      ";
    gotoxy(2,24-t);
    cout<<"           ÛÜ     ";
    a=1;
    }
    gotoxy(2,25-t);
    if(jump!=0){
        cout<<"                ";
    }
    else
    {
         
        printf("ßßßßßßßßßßßßßßßßß");
    }
    delay(speed);
}
void obj()
{
    static int x=0,scr=0;
    if(x==56 && t<4)
    {
    scr=0;
    speed=40;
    gotoxy(36,8);
    cout<<"Game Over" ;
    getch();
    gotoxy(36,8);
    cout<<"          ";
    }
    gotoxy(74-x,20);
    cout<<"Û     Û ";
    gotoxy(74-x,21);
    cout<<"Û     Û ";
    gotoxy(74-x,22);
    cout<<" ÛÜÜÜÜÛ ";
    gotoxy(74-x,23);
    cout<<"   Û    ";
    gotoxy(74-x,24);
    cout<<"   Û   " ;
    x++;
    if(x==73)
    {
    x=0;
    scr++;
    gotoxy(70,2);
    cout<<"     ";
    gotoxy(70,2);
    cout<<scr;
    if(speed>20)
        speed--;
    }
}
