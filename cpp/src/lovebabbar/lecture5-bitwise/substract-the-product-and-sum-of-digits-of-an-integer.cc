//
// Created by shaharuk shaikh on 01/06/22.
//
#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;

  cout << "Output: ";
  int sum = 0;
  int multi = 1;

  while(n>0){
    int digit = n % 10;
    sum += digit;
    multi *= digit;
    n /= 10;
  }
  cout << (multi - sum) << endl;

  return 0;
}