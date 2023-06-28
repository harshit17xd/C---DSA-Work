
// pattern
//    A A A
//    B B B 
//    C C C 



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
            // if (i = 1 )
            // {
            //     cout << "A"; 
            // }    

            // else if (i = 2) 
            // {
            //     cout << "B";
            // }      
            // else if (i = 3) 
            // {
            //     cout << "C";
            // }             
            // j = j + 1;

            char value = ('A' + i - 1);
            cout << value;
            j = j + 1;
            
        }
        cout <<endl;
        i = i + 1;
    }
}