/*
 different rounds/passes -> pick the smallest element and place is at right position
 time complexity:
 O(n^2)
 best case and worst case complexity is same O(n^2)

 best to use this algo when array size is small


 selection sort is unstable algorithm
 https://www.baeldung.com/cs/selection-sort-stable#:~:text=The%20Standard%20Selection%20Sort%20Is%20Not%20Stable

 */


#include<iostream>
#include<vector>
using namespace std;


int main(){
  vector<int> arr = {64, 25, 12, 22, 11};

  for(int i=0; i<arr.size(); i++){
    int minIdx = i;
    for(int j=i+1; j<arr.size(); j++){
      if(arr[j] < arr[minIdx])
        minIdx = j;
    }
    swap(arr[minIdx], arr[i]);
  }

  cout << "sorted array is: " << endl;
  for(auto a: arr)
    cout << a << ' ' << endl;

  return 0;
}
