//sum upto n numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter n :";
    cin >>n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        //cout <<sum;
    }
    cout <<sum;
}