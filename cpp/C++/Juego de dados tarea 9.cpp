#include <iostream>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char *argv[]) {
	
	int opcion,opcion2;
	char n;
	
	cout<<"Bienvenido al Juegos de Dados : \n";
	cout<<"Las Reglas son: \n";
	cout<<"Para ganar el Juego necesitas sacar los numeros\n";
	cout<<"2, 7 y 11 \n";
	cout<<"La suma totales de ambos dados\n";
	system("pause");
	system("cls");
	do
	{	srand(time(NULL));
		opcion=rand()%6+1;
		opcion2=rand()%6+1;
		cout<<opcion<<" + ";
		cout<<opcion2;
		cout<<" = " <<(opcion+opcion2);
		switch(opcion)
		{
			case 1:
				cout<<"\n+---------+\n|	  |\n|    *    |\n|    	  |\n+---------+\n";
				break;
			case 2:
				cout<<"\n+--------+\n|   *  	 |\n| 	 |\n|   *	 |\n+--------+\n";
				break;
			case 3:
				cout<<"\n+---------+\n|*        |\n|    *    |\n|        *|\n+---------+\n";
				break;
			case 4:
				cout<<"\n+--------+\n| *    * |\n|	 |\n| *    * |\n+--------+\n";
				break;
			case 5:
				cout<<"\n+---------+\n| *     * |\n|    *    |\n| *     * |\n+---------+\n";
				break;
			case 6:
				cout<<"\n+---------+\n| *     * |\n| *     * |\n| *     * |\n+---------+\n";
				break;
			case -1:
				cout<<"\nGracias por Jugar ";
				break;
			
		
		}
		switch(opcion2)
		{
			case 1:
				cout<<"\n+---------+\n|	  |\n|    *    |\n|    	  |\n+---------+\n";
				break;
			case 2:
				cout<<"\n+--------+\n|   *  	 |\n| 	 |\n|   *	 |\n+--------+\n";
				break;
			case 3:
				cout<<"\n+---------+\n|*        |\n|    *    |\n|        *|\n+---------+\n";
				break;
			case 4:
				cout<<"\n+--------+\n| *    * |\n|	 |\n| *    * |\n+--------+\n";
				break;
			case 5:
				cout<<"\n+---------+\n| *     * |\n|    *    |\n| *     * |\n+---------+\n";
				break;
			case 6:
				cout<<"\n+---------+\n| *     * |\n| *     * |\n| *     * |\n+---------+\n";
				break;
		}
		if(opcion+opcion2==2||opcion+opcion2==7||opcion+opcion2==11){
			cout<<"Ganastes en mi juego de azar y mujerzuelas\n";
			cout<<"Si desea seguir jugando preciones cualquier tecla \n";
			cout<<"Escriba -1 si desea salir salir: ";
			cin>>n;
			system("cls");		
		}
		else
		{
				cout<<"Sigue intentando casi, pero no \n";	
				cout<<"Si desea seguir jugando preciones cualquier tecla\n";
				cout<<"Escriba -1 si desea salir salir: ";
				cin>>n;
				system("cls");
		}
	}while(n!=-1);
	

	return 0;



}


