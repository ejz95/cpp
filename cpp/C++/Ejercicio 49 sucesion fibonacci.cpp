#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int fib(int n)
{
	if (n<=1)
	{
	   return n;
	}

	return fib(n - 1) + fib(n-2);
}

int main(int argc, char** argv) 
{
	cout<<fib(12);
	cout<<endl;




	return 0;
}
