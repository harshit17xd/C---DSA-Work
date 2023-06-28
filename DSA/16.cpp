// pattern
//    1
//    2 2
//    3 3 3



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
        while(j<=i)     //make pattern downward
        {
            cout <<i ;  //print numbers required
            j = j + 1;
        }
        cout <<endl;
        i = i + 1;
    }
}