#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int a=1000;
	int b=5000;
	int c=7000;
	
	if(a>b&&a>c)
	{ 
		cout<< "a es el numero mayor: "<<a;
	}	
	if (b>a&&b>c)
	{ 
		cout<<"b es el mayor: "<<b;
	}
	if(c>a&&c)
	{ 
	 	cout<< "c es el mayor: "<<c;
	}
	
	
	
	
	return 0;
}
