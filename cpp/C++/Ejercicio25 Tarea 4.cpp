#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int pares=0;
    int impares=0;
    int total;
    for(int i=0;i<=10;i++)
    {
       if(i%2==0)
       {     pares=pares+i;
       }
       cout<<i<<" ";
    }
    
    for(int i=0;i<10;i++)
    {
       if(i%2>=1)
       {     impares=impares+i;
       }
       
    }
    total=pares+impares;
    cout<<endl;
    cout<<endl;
    cout<<"total Pares: "<<pares<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"total Impares: "<<impares<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"total de pares y impares: "<<total<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
