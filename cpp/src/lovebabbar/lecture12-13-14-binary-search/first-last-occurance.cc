

#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int size, int key){
  int low = 0;
  int high = size-1;
  int mid = low + (high - low)/2;
  int ans = -1;

  while(low<=high){
    if(arr[mid] == key){
      ans = mid;
      high = mid - 1;
    }
    else if(key < arr[mid])
      high = mid -1;
    else if(key > arr[mid])
      low = mid + 1;
    mid = low + (high - low) / 2;
  }
  return ans;
}

int lastOcc(vector<int> arr, int size, int key){
  int low = 0;
  int high = size-1;
  int mid = low + (high - low)/2;
  int ans = -1;

  while(low <= high){
    if(arr[mid] == key){
      ans = mid;
      low = mid + 1;
    }
    else if(key < arr[mid])
      high = mid -1;
    else if(key > arr[mid])
      low = mid + 1;
    mid = low + (high - low) / 2;
  }
  return ans;
}


int main(){
  vector<int> arr = {2,3, 3, 4, 5, 5, 5, 5, 6};
  int key = 30;

  int f = firstOcc(arr, arr.size(), key);
  int l = lastOcc(arr, arr.size(), key);

  cout << "First index: " << f << endl;
  cout << "Last index: " << l << endl;
  return 0;
}
