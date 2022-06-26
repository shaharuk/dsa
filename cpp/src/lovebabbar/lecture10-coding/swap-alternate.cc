#include<iostream>
using namespace std;

int main(){
//  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i=0; i<size; i+=2){
    if(i+1 < size)
      swap(arr[i], arr[i+1]);
  }

  cout<< "Result array: ";
  for(auto a: arr){
    cout<< a << ' ';
  }
  cout << endl;
  return 0;
}