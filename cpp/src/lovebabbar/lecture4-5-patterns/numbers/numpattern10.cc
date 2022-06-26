/*
Enter a number:
4
Output:
D
C D
B C D
A B C D
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;

  cout << "Output: " << endl;
  int row = 1;
  while(row <= n){
    int col = 1;
    while(col < row) {
      cout << char('A' + n + col - row - 1) << ' ';
      col++;
    }
    cout << endl;
    row++;
  }
}