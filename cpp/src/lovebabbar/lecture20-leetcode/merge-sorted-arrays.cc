/*
 *
 */
#include<iostream>
#include<vector>

using namespace std;

vector<int> mergeArrays(vector<int>& nums1, vector<int>& nums2){
  int i = 0, j = 0, k=0;
  vector<int> ans;
  while(i<nums1.size() && j<nums2.size()){
    if(nums1[i] < nums2[j])
      ans.push_back(nums1[i++]);

    else
      ans.push_back(nums2[j++]);
  }
  // copy rest of the elements from nums1 if it has any elements left
  while(i<nums1.size())
    ans.push_back(nums1[i++]);

  // copy rest of the elements from nums1 if it has any elements left
  while(j<nums2.size())
    ans.push_back(nums2[j++]);

  return ans;
}


int main(){
  vector<int> nums1 = {1, 3, 5, 7, 9};
  vector<int> nums2 = {2, 4, 6};

  vector<int> ans = mergeArrays(nums1, nums2);

  cout << "Merged arrays" << endl;
  for(auto a: ans)
    cout << a << " ";
  cout << endl;
  return 0;
}