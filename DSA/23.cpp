//practice code for pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter n:";
    cin >> n;

    int i = 1;
    while(i<=n)
    {
        //printing space
        int space = n - i;
        while(space)
        {
            cout <<" ";
            space = space - 1;
        }
        
        //printing *
        int j = 1;
        while (j<=i)
        {
            cout <<"*";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}