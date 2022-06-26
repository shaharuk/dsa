


#include<iostream>
using namespace std;

int main(){
  int arr[5] {2, 7, 5, 9, 0};
  int size = sizeof(arr)/ sizeof(arr[0]);
  for(int i=0, j=size-1; i<=j; i++, j--){
    swap(arr[i], arr[j]);
  }

  cout << "Reversed array: " << endl;
  for(auto n: arr)
    cout << n << ' ';
  cout << endl;
}