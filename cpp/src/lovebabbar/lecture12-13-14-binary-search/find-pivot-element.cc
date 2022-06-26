
#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr, int key){
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(key == arr[mid])
      return mid;
    else if(key < arr[mid])
      e = mid - 1;
    else
      s = mid + 1;
    mid = s + (e-s)/2;
  }
  return -1;
}

int main(){
  vector<int> arr = {2, 4, 5, 7 ,9, 30};
  int key = 7;

  int ans = findPivot(arr, key);
  if(ans == -1)
    cout << "Element not present in array" << endl;
  else
    cout << "Element found at index : " << ans << endl;
  return 0;
}