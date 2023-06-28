
// pattern
//    A B C
//    A B C 
//    A B C 



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
        while(j<=n)     //make pattern square
        {
            char value = ('A' + j - 1);
            cout << value;
            j = j + 1; 
            
        }
        cout <<endl;
        i = i + 1;
    }
}