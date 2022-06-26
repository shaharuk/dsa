// this is slightly different problem than Love Babbar explained
// https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
  vector<int> arr = {2, 7, 11, 15};
  int target = 9;
  int currentSubstraction = 0;

  vector<int> res;
  unordered_map<int, int> map;

  for(int i=0; i<arr.size(); i++){
    currentSubstraction = target - arr[i];
    if(map.find(currentSubstraction) != map.end()){
      res.push_back(i);
      res.push_back(currentSubstraction);
    }
    map[arr[i]] = i;
  }

  cout << "The result is: " ;
  for(auto a : res)
    cout << a << ' ';
  cout << endl;
  return 0;
}