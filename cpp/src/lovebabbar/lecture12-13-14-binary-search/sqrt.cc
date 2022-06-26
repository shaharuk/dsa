#include<iostream>
using namespace std;

long long int findSQRT(int n){
  int s = 0;
  int e = n;
  long long int ans = 0;
  if(n == 0 || n == 1)
    return n;

  int mid = s + (e-s)/2;
  while(s <= e){
    long long int square = mid*mid;
    if(square == n)
      return mid;
    else if(square > n)
      e = mid -1;
    else if(square < n){
      ans = mid;
      s = mid+1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int main(){
  int ans = findSQRT(11);
  cout << "Square root is : " << ans;
  return 0;
}
