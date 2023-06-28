//Sum of numbers upto n

#include <iostream>
using namespace std;

int main()
{
    int n,i,sum;
    cin >>n;

    i=0;
    sum=0;

    while (i<=n)
    { 
        sum=sum+i;
        i=i+1; 
    }

    cout <<sum ;
    
}