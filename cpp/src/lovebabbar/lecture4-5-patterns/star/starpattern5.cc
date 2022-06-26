/*
Enter a number:
4
Output:
****
 ***
  **
   *
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
    while(spaces) {
      cout << ' ';
      spaces--;
    }
    for(int j=i; j<n; j++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}