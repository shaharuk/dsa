/*
Enter a number:
4
Output:
   1
  121
 12321
1234321
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;

  cout << "Output: " << endl;
//  int row = 1;
  for(int i=1; i<=n; i++){
    int spaces = n-i;

    while(spaces){
      cout << " ";
      spaces--;
    }

    for(int j=1;j<=i;j++){
      cout << j;
    }
    for(int j=i-1; j>0; j--){
      cout << j;
    }

    spaces = n - i;
    while(spaces){
      cout << " ";
      spaces--;
    }
    cout << endl;
  }
  return 0;
}