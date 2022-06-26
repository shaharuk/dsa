

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr = {0, 2, 2, 1,2, 2, 2, 2, 1, 1, 1, 1,  0, 1, 1, 0, 2};

  int low = 0, mid = 0;
  int high = arr.size() - 1;

  while(mid <= high){
    switch(arr[mid]){
      case 0:
        swap(arr[low], arr[mid]);
        low++;
        mid++;
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(arr[high], arr[mid]);
        high--;
        break;
    }
  }

  for(auto a: arr)
    cout << a << " " << ' ';
  cout << endl;
}