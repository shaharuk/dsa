//
// Created by shaharuk shaikh on 01/06/22.
//

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  bool isPrime = true;

  for(int i=2; i<n; i++){
    if(n%i == 0){
      isPrime = false;
      break;
    }
  }
  if(!isPrime)
    cout << "Not a prime number";
  else
    cout << "is a prime number";

  return 0;
}