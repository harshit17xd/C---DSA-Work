// pattern
//     *
//     **
//     ***


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter number:";
    cin >> n;

    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout <<"* ";
            j = j + 1;
        }
        cout <<endl;
        i = i + 1;
    }
}