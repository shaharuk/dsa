/*
Enter a number: 5
Output:
1234554321
1234**4321
123****321
12******21
1********1
 */

#include<iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Enter a number: ";
  cin >> n;

  cout << "Output: " << endl;

  for(int i=1; i<=n; i++){

    for(int j=1; j<=(n-i+1); j++){
      cout << j;
    }

    int a = i-1;
    while(a){
      cout << "**";
      a--;
    }

    for(int j=n-i+1; j>0; j--){
      cout << j;
    }
    cout << endl;
  }

  return 0;
}