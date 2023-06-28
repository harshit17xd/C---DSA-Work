//Code for tables

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter a number:";
    cin >>n;

    int i=1;
    while (i<=100)
    {
        cout <<n <<"x" <<i <<"=" <<n*i;
        //cout << n+i;
        i = i + 1;
        cout <<endl;
    }

    //n = n + 1;

}