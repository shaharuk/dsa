//
// Created by shaharuk shaikh on 02/06/22.
//

#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " ;
  cin >> n;
  int ans = 0;
  /*for(int i=0; n > 0; i++){
    int po = pow(2, i);
    int temp = !(n%2);
    ans = ans + po * temp;
    n = n/2;
  }*/

  int m = n;
  int mask = 0;
  // edge case
  if(n==0)
    return 0;

  while(m!=0){
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  ans = (~n) & mask;

  cout << "Complement is: " << ans << endl;
  return 0;
}