//Sum of even numbers upto n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;

    int i = 0;
    int sum = 0;

    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
        // sum=sum+i;
    }

    cout <<sum <<endl;
}