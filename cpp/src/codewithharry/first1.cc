//
// Created by shaharuk shaikh on 15/05/22.
//

#include<iostream>
#include<vector>

using namespace std;

int main(){
//  std::cout << "Hello World!";
  vector<int> nums {2, 2, 1, 1, 5, 6, 6, 8, 8};
  int x = 0;
  for(int n: nums){
    x ^= n;
    cout << "X is: " << x << endl;
//    101 ^ 110 -> 011 -> 3
// 011 ^ 110 -> 101 -> 5

  }
  cout << "The output is " << x << endl;
  return 0;
}