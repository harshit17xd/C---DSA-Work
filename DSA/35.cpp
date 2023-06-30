// check number is primme or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter n :";
    cin >>n;

    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        {
            cout <<"given number is not prime";
        }
        else
        {
            cout <<"given number is prime";
        }
        break;
    }
}