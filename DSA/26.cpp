// pattern
//    1 1 1 1
    //  2 2 2
    //    3 3
    //      4


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
        //print space
        int space = i - 1;
        while(space)
        {
            cout <<" ";
            space = space - 1;
        }

        //print *
        int j = 1;
        int value = (n - i + 1);
        while (value)
        {
            cout <<i;
            value = value - 1;
            j = j + 1;
        }
        cout <<endl;
        i = i + 1;
    }
}