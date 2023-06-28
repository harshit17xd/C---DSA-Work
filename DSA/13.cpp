//code for paattern
//  123
//  123
//  123
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
        while(j<=n)
        {
            cout <<j;
            j = j + 1;
        }
    cout <<endl;
    i = i + 1;
    }   
    
}