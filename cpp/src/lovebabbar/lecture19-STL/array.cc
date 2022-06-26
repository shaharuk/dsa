
#include<iostream>
#include<array>

using namespace std;

int main(){

  int basic[3] = {1, 2,3};

  array<int, 4> a = {4, 3, 2, 1};

  // diff -> stl array implementation is fixed sized static array same as above. So usually it st
  // not used in competitive programming
  for(int i=0; i<a.size(); i++)
    cout << a[i] << ' ';
  cout << endl;

  cout << "Array is empty or not: " << a.empty() << endl;
  cout << "First element: " << a.front() << endl;
  cout << "Last element: " << a.back() << endl;

}