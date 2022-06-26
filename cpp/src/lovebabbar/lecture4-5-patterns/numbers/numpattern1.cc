
/*
Enter a number:
4
Output:
1
2 3
4 5 6
7 8 9 10
 */

#include<iostream>
using namespace std;

int main() {
  int n {0};
  cout << "Enter a number: " << endl;
  cin >> n;

  cout << "Output: " << endl;
  int row = 1;
  int count = 1;
  while(row <= n){
    int col = 1;
    while(col <= row){
      cout << count << " ";
      col += 1;
      count += 1;
    }
    cout << endl;
    row += 1;
  }

  return 0;
}