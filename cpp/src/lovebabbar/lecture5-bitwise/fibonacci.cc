//
// Created by shaharuk shaikh on 01/06/22.
//

#include<iostream>
using namespace std;

int main(){
  int n = 10;
  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";
  for(int i=1; i<=n; i++){
    int next = a+b;
    cout << next << " ";
    a = b;
    b = next;
  }
  return 0;
}