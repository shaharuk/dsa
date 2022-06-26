/*
Enter a number:
4
Output:
   1
  212
 32123
4321234
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << "Output: " << endl;

  for(int i=1; i<=n; i++){
    int initspace = n - i;
    int trailingspace = n - i;

    while(initspace){
      cout << " ";
      initspace--;
    }
    for(int j=i; j<=i; j++){
      int temp = j;
      while(temp){
        cout << temp;
        temp--;
      }
      temp +=2;
      while(temp<=j){
        cout << temp;
        temp++;
      }
//      cout << i;
    }
    while(trailingspace){
      cout << " ";
      trailingspace--;
    }
    cout << endl;
  }
  return 0;
}