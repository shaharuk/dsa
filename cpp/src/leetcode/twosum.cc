/*
 * Created by shaharuk shaikh on 25/05/22.
 *https://leetcode.com/problems/two-sum
 *
 * Given an array of integers nums and an integer target, return indices of the two numbers such
 * that they add up to target.
 *
 * You may assume that each input would have exactly one solution, and you may not use the same
 * element twice.
 *
 * You can return the answer in any order.
 *
 * Example 1:
 * input: nums = [2, 7, 11, 15], target = 9
 * output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 *
 * Example 2:
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> result;
  unordered_map<int, int> mp;
  int currentSubstraction {0};
  for(int i=0; i<nums.size(); i++) {
    currentSubstraction = target - nums[i];
    if(mp.find(currentSubstraction) != mp.end()) {
      result.push_back(mp[currentSubstraction]);
      result.push_back(i);
    }
    mp[nums[i]] = i;
  }
  return result;
  /*
   * Iteration 1:
   * i = 0, currentSubstraction = 9 - nums[i] -> 9 - 2 -> 7
   * not found in mp, so added like mp[2] = i -> mp[2] = 0
   * means mp now has 0 at index 2
   *
   * Iteration 2:
   * i = 1, currentSubstraction = 9 - nums[1] -> 9 - 7 -> 2
   * found in mp at index 0 ->  mp[2] = 0 -> which is added to result -> result[0] = 0
   * then push back the current index into result -> result[1] -> 1
   *
   * return the result;
   */
}


int main(){

  vector<int> nums {2, 7, 11, 15};
  vector<int> output = twoSum(nums, 9);

  cout << "The output is: " << endl;
  for(int i: output) {
    cout << i << ' ';
  }
  return 0;
}