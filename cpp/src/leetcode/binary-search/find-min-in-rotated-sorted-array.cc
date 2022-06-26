/*
 https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 */

#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums){
  int s = 0;
  int e = nums.size() - 1;
  int mid;
  int currentMin = INT_MAX;

  while(s <= e){
    mid = s + (e - s)/2;
    currentMin = min({currentMin, nums[mid], nums[mid-1]});
    if(nums[s] <= nums[mid]){
      // left part is already sorted
      if(currentMin >= nums[s] && currentMin <= nums[mid]){

      }
    }
  }
  return currentMin;

}


int main(){
  vector<int> nums = {3, 4, 5, 1, 2};
  int ans = findMin(nums);
  cout << "Minimum number in the array is: " << ans << endl;
  return 0;
}

