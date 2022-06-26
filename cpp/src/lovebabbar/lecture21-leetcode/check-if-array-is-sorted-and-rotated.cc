/*
 * https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
//  vector<int> nums {1, 2, 3, 4, 5};
  vector<int> nums {5, 2, 4, 3, 1};
  int count = 0;
  int n = nums.size();

  for(int i=1; i<n; i++){
    if(nums[i-1] > nums[i])
      count++;
  }
  if(nums[n-1] > nums[0])
    count++;

  // <= since the array elements are same
  if(count <= 1)
    cout << "array is sorted and rotated" << endl;
  else
    cout << " Array is not rotated and sorted"<< endl;

  return 0;
}