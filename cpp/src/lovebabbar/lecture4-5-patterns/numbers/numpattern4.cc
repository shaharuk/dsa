/*
Enter a number:
5
Output:
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
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
    int col = 1 ;
    while(col <= row){
      cout << (row - col + 1) << ' ';
      col += 1;
    }
    cout << endl;
    row += 1;
  }
  return 0;
}