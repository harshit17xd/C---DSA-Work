
// pattern
//    1
//    2 3
//    4 5 6 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter number:";
    cin >> n;

    int i = 1;
    int count = 1;
    while(i<=n)
    {
        int j = 1;  
        while(j<=i)     //make pattern downward
        {
            cout <<count <<" ";  //print numbers required
            count = count + 1;
            j = j + 1;
        }
        cout <<endl;
        i = i + 1;
    }
}