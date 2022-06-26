/*
 compare neighbouring elements
 Time complexity: O(n^2)
 best case: already sorted array O(n)
 worst case: reverse sorted array O(n^2)

 Space complexity: O(1)


 Bubble sort is stable sorting algorithm
 https://www.baeldung.com/cs/stable-sorting-algorithms

 Bubble sort is an inplace algorithm. An algorithm is said to be inplace if it does not need an
 extra space and produces an output in the same memory that contains the data by transforming the
 input 'in-place'.
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr = {10, 1, 7, 6, 14, 9};

  /*for(int i=0; i<arr.size(); i++){
    for(int j = 0; j<arr.size()-i-1; j++){
      if(arr[j] > arr[j+1])
        swap(arr[j], arr[j+1]);
    }
  }
*/
  // optimized to get O(n) if already sorted array
  for(int i =0; i<arr.size(); i++){
    bool sorted = true;
    for(int j=0; j<arr.size()-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        sorted = false;
      }
    }
    if(sorted)
      break;

  }

  cout << "Sorted array is: " << endl;
  for(auto a: arr)
    cout << a << " ";

  return 0;
}