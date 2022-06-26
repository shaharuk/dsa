//
// Created by shaharuk shaikh on 25/05/22.
//


#include<iostream>
#include<vector>
#include<array>
#include <cmath>

//binary search
using namespace std;

long long solution1(int n, vector<long long> arr) {
  long long ans = 0;
  int middle = floor(n/2);
  int left = 0;
  int right = 0;

  long long required_height = 0;
  if(n%2 == 1){
    required_height = arr[middle] + 1;
    left = middle - 1;
    right = middle + 1;
  }
  else{
    required_height = 0;
    left = middle - 1;
    right = middle;
  }
  while(left >= 0) {
    if(required_height >= max(arr[left], arr[right])){
      ans += 2 * required_height - arr[left] - arr[right];
    }
    else {
      int new_required_height = max(arr[left], arr[right]);
      ans += 2 * new_required_height - arr[left] - arr[right];
      ans += (right - left - 1) * (new_required_height - required_height);
      required_height = new_required_height;
    }
    required_height += 1;
    left -= 1;
    right += 1;
  }

  return ans;
}

int main(){
  vector<long long> arr =  {1, 2, 4, 3, 0, 5};

  long long res = solution1(6, arr);
  cout << "Number of bricks required: " << res << endl;
}