

#include<iostream>
using namespace std;

int main(){
  int arr[5] {20, -5, 1, 100, -100};
  int sum = 0;

  for(int i=0; i< (sizeof(arr)/sizeof(arr[0])); i++){
    sum += arr[i];
  }
  cout << "Sum is: " << sum << endl;
  return 0;
}