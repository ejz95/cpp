#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a=2;
    int b=10;
    
    while(a>b)
    {
      cout<<"(while) a > b";
      break;        
    }
    
    do
    {
      cout<<"(do while) a > b";
      break;   
    }while(a>b);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
