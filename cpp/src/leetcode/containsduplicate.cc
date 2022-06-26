/*
  Created by shaharuk shaikh on 24/05/22.

  https://leetcode.com/problems/contains-duplicate

  Given an interger array nums, return true if any value appears at least twice in the array,
  and return false if every element is distinct.
  e.g.:
  1)
    input: nums = [1, 2, 3, 1]
    output: true

  2)
    Input: nums = [1, 2, 3, 4]
    output: false
*/

#include<iostream>
#include<vector>
#include<set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
  set<int> a{};
  for(int num: nums){
    if(a.find(num) != a.end()) return true;
    else a.insert(num);
  }
  return false;
}

int main() {
  vector<int> inp {1, 2, 3};
  bool contains = containsDuplicate(inp);
  cout << "The input array contains duplicate? 1=True, 0=false: " << contains << endl;
  return 0;
}


