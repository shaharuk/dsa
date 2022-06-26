
#include<iostream>
#include<vector>

using namespace std;

int main(){
  // dynamically doubles the size of vector/itself when needed
  vector<int> v;

  cout << "Capacity of vector: " << v.capacity() << endl;

  v.push_back(1);
  cout << "Capacity of vector: " << v.capacity() << endl;

  v.push_back(3);
  cout << "Capacity of vector: " << v.capacity() << endl;

  v.push_back(4);
  cout << "Capacity of vector: " << v.capacity() << endl;

  // size is number of elements in vector
  cout << "Size of vector v: " << v.size() << endl;

  cout << "Front element: " << v.front() << endl;

  cout << "Last element: " << v.back() << endl;

  cout << "element at index: " << v.at(1) << endl;
  cout << "Element at index: " << v[1] << endl;


  // pop_back, delete the last element
  cout << "before pop_back: ";
  for(auto a: v)
    cout << a << ' ';
  cout << endl;

  //pop_back
  v.pop_back();
  cout << "after pop back: ";
  for(auto a: v)
    cout << a << ' ';
  cout << endl;

  // clear the vector => delete all elements in array
  v.clear();

  // ways to initialize
  //  initialize vector v2 with initial size of 5 and all elements as 1
  vector<int> v2(5, 1);
  for(auto a: v2)
    cout << a << ' ';
  cout << endl;

  // copy all elements from one vector to another
  vector<int> v3(v2);



  return 0;
}