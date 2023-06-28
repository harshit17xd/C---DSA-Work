//practice code for paattern
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter rows"; 
    cin>> n; 

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout <<i;
            j = j + 1;
        }
    cout <<endl;
    i = i + 1;
    }   
    
}