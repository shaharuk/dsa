//
// Created by shaharuk shaikh on 02/06/22.
//


#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a binary number: " << endl;
  cin >> n;

  int ans = 0, i = 0;
  while(n!=0){
    int bit = n & 1;
    int digit = n % 10;
    if(digit == 1)
      ans = ans + pow(2, i);

    n = n / 10;
    i++;
  }
  cout << ans << endl;
  return 0;
}