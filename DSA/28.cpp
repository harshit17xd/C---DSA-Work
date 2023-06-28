// pattern
//        1 2 3 4 5 5 4 3 2 1      
//        1 2 3 4 * * 4 3 2 1 
//        1 2 3 * * * * 3 2 1
//        1 2 * * * * * * 2 1
//        1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main()
{  
    {
        //1st tri
        int n;
        cout <<"Enter n:";
        cin >>n;

        int i = 1;
        while (i<=n)
        {
            int j = 1;
            int value = j;
            while(j<=n)
            {

                cout <<value;
                value = value - 1;
            }
            cout <<endl;
            i = i + 1
        }
        

        

        //print 2nd half 


        //print 3rd half
        
        
        
    }
    
}