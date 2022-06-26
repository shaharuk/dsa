/*
 *
 */

#include<iostream>

using namespace std;

int main(){
  int a, b;
  cout << "Enter values for a and b: ";
  cin >> a >> b;
  char op;
  cout << "Enter the operation you want to perform: " ;
  cin >> op;
  switch (op) {
    case '+':
      cout << "Addition of a and b: " << a+b << endl;
      break;
    case '-':
      cout << "Addition of a and b: " << a-b << endl;
      break;
    case '*':
      cout << "Addition of a and b: " << a*b << endl;
      break;
    case '/':
      cout << "Addition of a and b: " << a/b << endl;
      break;
    case '%':
      cout << "Addition of a and b: " << a%b << endl;
      break;
    default:
      cout << "Enter a valid operation!" << endl;
      break;
  }
}