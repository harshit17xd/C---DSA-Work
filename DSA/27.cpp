// pattern
//        1      
//      1 2 1
//     1 2 3 2 1
//    1 2 3 4 3 2 1


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter n:";
    cin >>n;

    int i = 1;
    while (i<=n)
    {
        //print space
        int spcae = (n - i);
        while (spcae)
        {
            cout <<" ";
            spcae = spcae - 1;
        }

        //print 2nd half 
        int j = 1;
        while (j<=i)
        {
            cout <<j;
            j = j + 1;
        }
        

        //print 3rd half
        int value = i - 1;
        while (value)
        {
            cout <<value;
            value = value - 1;
        }

        cout <<endl;
        i = i + 1;
        
        
    }
    
}