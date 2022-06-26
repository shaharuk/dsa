/*
Enter a number:
4
Output:
   1
  23
 456
78910
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << "Output: " << endl;

  int t = 1;
  for(int i=1; i<=n; i++){
    int spaces = n-i;
    while(spaces){
      cout << ' ';
      spaces--;
    }
    for(int j=0; j<i; j++){
      cout << t;
      t++;
    }
    cout << endl;
  }
  return 0;
}