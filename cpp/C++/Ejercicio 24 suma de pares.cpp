#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int pares=0;
    for(int i=0;i<10;i++)
    {
       if(i%2==0)
       {     pares=pares+i;
       }
       cout<<i<<" ";
    }
    
    cout<<endl;
    cout<<endl;
    cout<<"total pares: "<<pares<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
