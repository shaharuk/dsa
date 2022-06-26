#include<iostream>
using namespace std;

int main() {
    // for loop
    // int n;
    // cout << "Enter number to find sum: " << endl;
    // cin >> n;
    // int sum = 0;

    // for(int counter=0; counter <= n; counter++){
    //     sum = sum + counter;
    // }
    // cout << "Sum is: " << sum << endl;

    //Prog2: while loop
    // int n;
    // cout << "Enter number: " ;
    // cin >> n;

    // while(n>0) {
    //     cout << "Number is greater than 0" << endl;
    //     cin >> n;
    // }


    //Prog3: do while
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    do{
        cin >> n;
    }while(n>0);

    return 0;
}