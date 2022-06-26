/*
Enter a number:
4
Output:
A A A A
B B B B
C C C C
D D D D
 */

#include<iostream>
using namespace std;

int main(){
  int n {0};
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << "Output: " << endl;
  int row = 1;
  while(row <= n){
    int col = 1;
    while(col <= n){
      cout << char('A' + row - 1) << ' ';
      col += 1;
    }
    cout << endl;
    row += 1;
  }
  return 0;
}