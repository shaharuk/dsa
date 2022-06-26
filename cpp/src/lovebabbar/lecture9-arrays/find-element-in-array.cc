

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
  for(int i=0; i<size; i++){
    if(arr[i] == key)
      return true;
  }
  return false;
}

int main(){
  int arr[10] {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  int n;
  cout << "Enter the element to search: ";
  cin >> n;

  bool found = search(arr, sizeof(arr)/sizeof(arr[0]), n);
  if(found)
    cout << "Element found in array!" << endl;
  else
    cout << "Element not present in array!" << endl;
  return 0;
}