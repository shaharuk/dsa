/*
 Don't know why it works on leetcode but not here?
 */
#include<iostream>
#include<vector>

using namespace std;

void mergeArrays(vector<int>& nums1, int m, vector<int>& nums2, int n){
  int k = m + n - 1;
  m--;
  n--;
  while(m>=0 && n>=0){
    if(nums1[m] > nums2[n])
      nums1[k--] = nums1[m--];
    else
      nums1[k--] = nums2[n--];
  }
  // put if any elements left in nums2
  while(n>=0)
    nums1[k--] = nums2[n--];

  cout << "Printing after merging: " << endl;
  for(auto a: nums1)
    cout << a << " ";
  cout << endl;
}

int main(){
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  vector<int> nums2 = {2, 5, 6};

  int m = nums1.size();
  int n = nums2.size();
  mergeArrays(nums1, m, nums2, n);


  return 0;
}
