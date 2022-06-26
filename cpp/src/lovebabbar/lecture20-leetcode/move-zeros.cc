/*
 * Two pointer method
 */

#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector<int> arr = {0, 1, 0, 3, 12};

  int i = 0;
  for(int j=0; j<arr.size(); j++){
    if(arr[j] != 0){
      swap(arr[j], arr[i]);
      i++;
    }
  }

  cout << "print the output: " << endl;
  for(auto a : arr){
    cout << a << ' ';
  }
  cout << endl;

  return 0;
}