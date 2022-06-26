
/*
Enter a number:
6
Output:
******
*****
****
***
**
*
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
    int col = n;
    while(col >= row) {
      cout << '*';
      col -= 1;
    }
    cout << endl;
    row += 1;
  }
  return 0;
}