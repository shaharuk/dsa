/*
 https://leetcode.com/problems/intersection-of-two-arrays/
 */

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){
  vector<int> nums1 {1,2, 3, 4, 5};
  vector<int> nums2 {2, 4, 6, 5};
  unordered_set<int> set1;

  vector<int> res;

  for(int & i : nums1){
    set1.insert(i);
  }
  for(int& i : nums2){
    if(set1.find(i) != set1.end()){
      res.push_back(i);
      set1.erase(i);
    }
  }

  for(auto a: res){
    cout << a << " ";
  }
  cout << endl;
  return 0;
}