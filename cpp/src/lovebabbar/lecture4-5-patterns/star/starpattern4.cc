/*
Enter a number:
4
Output:
* * * *
* * *
* *
*
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: "  << endl;
  cin >> n;
  cout << "Output: " << endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<(n-i); j++){
      cout << '*' << ' ';
    }
    cout << endl;
  }
  return 0;
}