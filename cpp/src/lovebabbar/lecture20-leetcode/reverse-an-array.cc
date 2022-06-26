/*

 */

#include<iostream>
#include<vector>

using namespace std;


int main(){
//  vector<int> arr = {4, 3, 2, 1};
  vector<int> arr = {11, 7, 3, 12, 4};

  int s = 0;
  int e = arr.size()-1;
  while(s<=e){
    swap(arr[s], arr[e]);
    s++;
    e--;
  }

  for(auto a : arr)
    cout << a << " ";
  cout << endl;
  return 0;
}