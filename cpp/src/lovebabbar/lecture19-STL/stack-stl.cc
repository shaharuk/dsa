/*
 LIFO -> last in first out
 FILO -> first in last out
 */

#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<string> s;

  s.push("shaikh");
  s.push("shaharuk");
  s.push("sadik");

  cout << "Top of the stack element: " << s.top() << endl;

  cout << "Size of stack is: " << s.size() << endl;

  cout << "Empty or not : " << s.empty() << endl;


  return 0;
}