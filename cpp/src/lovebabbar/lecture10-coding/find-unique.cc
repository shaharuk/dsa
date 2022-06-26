

#include<iostream>
using namespace std;

int main(){
//  int arr[5] = {4, 4, 1, 1, 6};
  int arr[9] = {4, 6, 1, 2, 6, 4, 1, 7, 2};
  int size = sizeof(arr)/sizeof(arr[0]);
  int ans = 0;
  for(int i=0; i<size; i++){
    ans = ans ^ arr[i];
  }

  cout << "Unique element is: " << ans << endl;
}