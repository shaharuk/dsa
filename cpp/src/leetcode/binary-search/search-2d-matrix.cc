/*
 https://leetcode.com/problems/search-a-2d-matrix/
 */


#include<iostream>
#include<vector>

using namespace std;

int searchMatrix(vector<vector<int>> nums, int target){
  int n = nums.size();
  int m = nums[0].size();

  int s = 0;
  int e = n * m -1;
  int mid = s + (e-s)/2;

  while(s<=e){
    int row = mid / m;
    int col = mid % m;
    if(target == nums[row][col])
      return mid;
    else if(target < nums[row][col])
      e = mid -1;
    else
      s = mid + 1;
    mid = s + (e-s)/2;
  }
  return -1;
}


int main(){
  vector<int> r1 = {1,3, 5, 7};
  vector<int> r2 = {10, 11, 16, 20};
  vector<int> r3 = {23, 30, 34, 60};

  vector<vector<int>> arr = {r1, r2, r3};
  int target = 20;

  int ans = searchMatrix(arr, target);
  cout << "Element found at index: " << ans << endl;

  return 0;
}