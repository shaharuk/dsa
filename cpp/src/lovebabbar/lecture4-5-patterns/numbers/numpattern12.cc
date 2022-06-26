/*
Enter a number:
4
Output:
1234
 234
  34
   4
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << "Output: " << endl;

  for(int i=1; i<=n; i++){
    int spaces = i - 1;
    while(spaces){
      cout << " ";
      spaces--;
    }
    for(int j=i; j<=n; j++){
      cout << j;
    }
    cout << endl;
  }
  return 0;
}