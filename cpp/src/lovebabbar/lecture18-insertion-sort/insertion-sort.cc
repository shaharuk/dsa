/*
 Insertion sort is very Adaptable algorithm
 stable algorithm (maintains relative position of same values elements)

 Time complexity: O(n^2)
 Best case: already sorted array O(n)
 Worst case: reverse sorted array O(n^2)

 space: complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr = {4, 12, 11, 20};

  for(int i=1; i<arr.size(); i++){
    int temp = arr[i];
    int j = i-1;
    for(; j>=0; j--){
      if(arr[j] > temp){
        arr[j+1] = arr[j];
      }
      else
        break;
    }
    arr[j+1] = temp;
  }

  cout << "sorted array is: ";
  for(auto a: arr)
    cout << a << ' ';
  cout << endl;

  return 0;
}