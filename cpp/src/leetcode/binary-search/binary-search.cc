/*
 https://leetcode.com/problems/binary-search/
 */

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int key){
  int s = 0;
  int e = arr.size()- 1;
  int mid = s + (e - s)/2;

  while(s <= e){
    if(key == arr[mid])
      return mid;
    else if(key < arr[mid])
      e = mid -1;
    else
      s = mid+1;
    mid = s + (e - s)/2;
  }
  return -1;
}

int main(){
  vector<int> arr = {-1, 0, 3, 5, 9, 12};
  int key = 2;
  int index = binarySearch(arr, key);
  if(index == -1)
    cout << "Element not found in array." << endl;
  else
    cout << "Element found at index: " << index << endl;
  return 0;
}