/*
Enter a number:
5
Output:
1
21
321
4321
54321
 */


#include<iostream>
using namespace std;

int main(){
  int n {0};
  cout << "Enter a number: " << endl;
  cin >> n;

  cout << "Output: " << endl;
  int row = 1;
  while(row <= n) {
    int col = 1;
    while(col <= row) {
      cout << (row - col + 1);
      col += 1;
    }
    cout << endl;
    row += 1;
  }
  return 0;
}