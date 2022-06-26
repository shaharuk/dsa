/*
 * https://leetcode.com/problems/rotate-array/
 * shifting elements in array in cyclic way f=by k positions
 *
 */

#include<iostream>
#include<vector>

using namespace std;


int main(){
  vector<int> arr = {9, 11, 1, 7};
  int n = arr.size();
  int k = 2;
  vector<int> temp(n);

  for(int i=0; i<n; i++){
    temp[(i+k)%n] = arr[i];
  }
  arr = temp;

  for(auto a : arr)
    cout << a << ' ';
  cout << endl;
  return 0;
}