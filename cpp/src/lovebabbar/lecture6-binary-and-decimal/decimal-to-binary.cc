//
// Created by shaharuk shaikh on 01/06/22.
//

#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;

  int ans = 0;
  int i=0;
  while(n!=0){
    int bit = n & 1;
    ans = (bit * pow(10, i)) + ans;
    n = n >> 1;
    i++;
  }
  cout << "Binary number is : " << ans << endl;
  return 0;
}