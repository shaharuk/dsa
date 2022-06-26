/*
Enter a number:
4
Output:
1111
 222
  33
   4
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << "Output: " << endl;

  for(int i=0; i<n; i++){
    int spaces = i;
    while(spaces){
      cout << ' ';
      spaces--;
    }
    for(int j=0; j<n-i; j++){
      cout << i+1;
    }
    cout << endl;
  }
  return 0;
}