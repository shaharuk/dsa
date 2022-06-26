/*
 *
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: ";
  cin >> n;

  int ans = 0;
  while(n!=0){
    int digit = n % 10;
    if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
      cout << "Reverse is: 0" << endl;
      exit(0);
    }
    ans = ans * 10 + digit;
    n = n / 10;
  }
  cout << "Reverse is: " << ans << endl;
  return 0;
}