
#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr = {0, 1, 0, 1, 0};

  int left = 0;
  int right = arr.size()-1;
  while(left<right){
    while(arr[left] == 0 && left<right)
      left++;
    while(arr[right] == 1 && left<right)
      right--;

    swap(arr[left], arr[right]);
    left++;
    right--;
  }

  for(auto a: arr)
    cout << a << " ";
  cout << endl;
  return 0;
}