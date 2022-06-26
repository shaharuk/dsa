
#include<iostream>

using namespace std;

int main(){
    cout << "Hello World!" << endl;

    int a = 1;
    cout << "size of int "<< sizeof(a) << endl;
    
    float b = 1.1;
    cout << "size of float " << sizeof(b) << endl;
    
    double c = 1.1;
    cout << "size of double " << sizeof(c) << endl;
    
    char d = 'c';
    cout << "size of char " << sizeof(d) << endl;

    short int si;
    cout << "size of short int " << sizeof(si) << endl;

    long int li;
    cout << "size of long int " << sizeof(li) << endl;

    return 0;
}