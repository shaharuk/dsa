/*
 https://leetcode.com/problems/find-all-duplicates-in-an-array/
 */


#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
  int arr[5] = {3, 4, 3, 4, 2};
//  int arr[10] = {3, 5, 4, 3, 7, 4, 1, 1, 9, 3};
  int size = sizeof(arr)/ sizeof(arr[0]);
  unordered_map<int, int> m;
  vector<int> ans;

  for(auto a: arr){
    m[a]++;
    if(m[a] > 1)
      ans.push_back(a);
  }
  cout << "The result array is: ";
  for(auto a: ans)
    cout << a << " ";
  cout << endl;

  return 0;
}
