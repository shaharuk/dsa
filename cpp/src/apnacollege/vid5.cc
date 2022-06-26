#include<iostream>

using namespace std;

int main() {
    //oddeven if/else
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    if(a%2 == 0) {
        cout<< "Number is Even" << endl;
    } 
    else {
        cout << "Number is Odd" << endl;
    }
    return 0;
}