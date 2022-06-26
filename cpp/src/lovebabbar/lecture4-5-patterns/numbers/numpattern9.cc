/*
Enter a number:
4
Output:
A
B C
C D E
D E F G
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
    while(col <= row){
      cout << char('A' + row + col - 2) << ' ';
      col++;
    }
    cout << endl;
    row++;

  }
  return 0;
}