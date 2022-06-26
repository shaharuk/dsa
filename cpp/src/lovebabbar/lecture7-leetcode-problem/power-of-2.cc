
#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  int ans = 1;
  for(int i=0; i<=30; i++){
    if(ans == n){
      cout << "Number is power of two" << endl;
      return 0;
    }
    if(ans < INT_MAX/2)
      ans *= 2;
  }
  cout << "Is not" << endl;
  return 0;
}