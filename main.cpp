#include <iostream>
#include <string>
using namespace std;

int main()
{
    string zmienna;
    string zmienna2;
    
    for (int i=0; i<10;i++)
    {
    	cin>> zmienna;
    	zmienna2+=(zmienna+", ");
    }
    
    	cout << zmienna2 ;
       
    return 0;
}

