#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  vector<int> v = {1, 3, 6, 7};
  cout<< "Finding 6 in vector: " << binary_search(v.begin(), v.end(), 6)  << endl;

  // finding lower bound and upper bound
  cout << "lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
  cout << "upper bound " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;


  cout << max(4, 5) << endl;
  cout << min(4, 5) << endl;

  int a = 4;
  int b = 5;
  swap(a, b);
  cout << "a = " << a  << " and b = " << b << endl;


  // reverse a string
  string abcd = "shahrukh";
  reverse(abcd.begin(), abcd.end());
  cout << "After reversing: " << abcd << endl;

  //rotate a vector

  vector<int> v1 = {1, 3, 6, 7};
  cout << "Rotate a vector" << endl;
  rotate(v1.begin(), v1.begin()+1, v1.end());
  for(auto a1: v1)
    cout << a1 << " ";
  cout << endl;


  vector<int> v2 = {4, 2, 7, 1, 0};

  sort(v2.begin(), v2.end());
  // this used INTRO-SORT which is a combination of heap sort, insertion sort and quick sort
  cout << "After sorting a vector" << endl;
  for(auto a2: v2)
    cout << a2 << " " ;
  cout << endl;
  return 0;
}