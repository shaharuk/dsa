/*
Enter a number:
4
Output:
A B C D
E F G H
I J K L
M N O P
 */
#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;

  cout << "Output: " << endl;
  int start = 65;
  int row = 1;
  while(row <= n){
    int col = 0;
    while(col < n){
      cout << char(start + col) << ' ';
      col += 1;
    }
    start += col;
    cout << endl;
    row += 1;
  }

  return 0;
}