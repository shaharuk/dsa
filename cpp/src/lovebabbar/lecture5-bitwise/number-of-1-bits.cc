//
// Created by shaharuk shaikh on 01/06/22.
//

#include<iostream>
using namespace std;

int main(){
//  uint32_t n = 00000000000000000000000010000000;
  uint32_t n = 00000000000000000000000000001011;
  int count = 0;
  while(n!=0){
    // check last bit
    if(n&1)
      count++;
    n = n>>1;
  }
  cout << "Output: " << count << endl;
  return 0;
}