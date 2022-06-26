#include<iostream>
#include<vector>

using namespace std;


/*int findPivot(vector<int> arr, int key){
  int s = 0;
  int e = arr.size()-1;
  int mid = s + (e-s)/2;

  while(s<e){
    if(key == arr[mid])
      return mid;
    if(arr[s] <= arr[mid]){
      //left part is already sorted
      if(key >= arr[s] && key <= arr[mid] ){
        e = mid - 1;
      }
      else if(key >= arr[mid])
        s = mid + 1;
    }

    else{
      if(key >= arr[mid] && key <= arr[e]){
        s = mid + 1;
      }
      else if(key <= arr[mid] && key <= arr[e])
        e = mid - 1;
    }
    mid = s + (e-s)/2;
  }

  return -1;
}*/

int findPivot(vector<int> arr, int key){
  int l = 0;
  int h = arr.size()-1;
  int mid = l + (h-l)/2;
  while(l<=h){
    if(key == arr[mid])
      return mid;

    if(arr[l] <= arr[mid]){
      // left part is already sorted
      if(key >= arr[l] && key <= arr[mid])
        h = mid - 1;
      else{
        l = mid +1;
      }
    }
    else{
      // left part is not sorted
      if(key >= arr[mid] && key <= arr[h])
        l = mid + 1;
      else
        h = mid - 1;
    }
    mid = l + (h-l)/2;
  }
  return -1;
}


int search(vector<int> arr, int l, int h, int key){

  if(l > h){
    return -1;
  }
  int mid = (l + h) / 2;
  if(arr[mid] == key){
    return mid;
  }

  if(arr[l] <= arr[mid]) {
    if(key >= arr[l] && key <= arr[mid])
      return search(arr, l, mid - 1, key);
    // if key >= arr[l] && key >= arr[mid] -> search in right part of array
    return search(arr, mid + 1, h, key);
  }
  // search in right part of the array
  if(key >= arr[mid] && key <= arr[h])
    return search(arr, mid+1, h, key);
  //search in the left part of the array
  return search(arr, l, mid-1, key);

}


int main(){
  vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7};
  vector<int> arr = {6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
  int key = 7;
//  int ans = search(arr, 0, arr.size()-1, key);
  int ans = findPivot(arr, key);
  if(ans == -1)
    cout << "Element not found in an array" << endl;
  else
    cout << "Element found at index: " << ans << endl;
  return 0;
}