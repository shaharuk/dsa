/*
Enter a number:
4
Output:
   *
  **
 ***
****
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << "Output: " << endl;

  for(int row=1; row<=n; row++){
    int spaces = n - row;
    while(spaces){
      cout << " ";
      spaces--;
    }
    for(int col=1; col<=row; col++){
      cout << '*';
    }
    cout << endl;
  }
}