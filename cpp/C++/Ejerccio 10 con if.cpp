#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) 
{
	int a=10;
	int b=5;
	int c=7;
	
	if (a>b)
	{
		if(a>c)
		{
			cout<< "a es el mayor";
		}else{
		 	cout<<"C es el mayor";
		 }
	}else {
	  if(a>c){
	  	cout<< "B es el mayor ";
	  }else{
		cout<<"C es el mayor";	 
	  }
	 }
	
	
	
	return 0;
}
