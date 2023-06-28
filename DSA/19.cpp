// pattern
//    1
//    2 1
//    3 2 1



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
        int value = i;  //take new var = i to print
        while(j<=i)     //make pattern downward
        {
            cout <<value ;  //print numbers required
            value = value - 1;
            j = j + 1;
            
        }
        cout <<endl;
        i = i + 1;
    }
}