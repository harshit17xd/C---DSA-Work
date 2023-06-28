// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     if(n>0)
//     {
//         cout <<"n is +ve" <<endl;
//     }
//     else
//     {
//         cout <<"n is -ve" <<endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int number;
    cout<< "Enter an integer: ";
    cin>> number;
    if ( number >= 0) {
        cout << "You entered a positive integer: "<<number<<endl;
    }
    else {
        cout<<"You entered a negative integer: "<<number<<endl;
    }
    return 0;
}