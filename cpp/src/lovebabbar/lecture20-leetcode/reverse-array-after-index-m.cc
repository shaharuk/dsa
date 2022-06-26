

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr = {11, 7, 3, 12, 4};
  int index = 1;

  int s = index+1;
  int e = arr.size()-1;

  while(s<=e){
    swap(arr[s], arr[e]);
    s++;
    e--;
  }

  cout << "After reversing: " << endl;
  for(auto a : arr)
    cout << a << " ";
  cout << endl;
  return 0;
}