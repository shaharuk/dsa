/*
Enter a number:
4
Output:
A
B C
D E F
G H I J
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;

  cout << "Output: " << endl;
  int row = 1;
  char start = 'A';

  while(row <= n){
    int col = 1;
    while(col <= row){
      cout << start++ << ' ';
      col++;
    }
    cout << endl;
    row++;
  }
  return 0;
}