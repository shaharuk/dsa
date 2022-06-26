#include<iostream>
using namespace std;

int main(){
  // each element in array should be < size of an array
  int arr[5] = {1, 3, 2, 4, 4};
  int size = sizeof(arr)/ sizeof(arr[0]);
  int ans = 0;
  for(int i=0; i<size; i++){
    ans = ans ^ arr[i];
  }
  for(int i=1; i<size; i++){
    ans = ans ^ i;
  }
  cout << "Duplicate Element: " << ans << endl;
  return 0;
}