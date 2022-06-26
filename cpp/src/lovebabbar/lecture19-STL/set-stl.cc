
/*
 stores unique element
 BST is used behind the scene
 elements are returned in sorted form


 Unordered set: unique elements but not sorted
 */

#include<iostream>
#include<set>

using namespace std;

int main(){
  set<int> s;
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(5);

  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(0);
  s.insert(0);
  s.insert(0);
  // insert operation time complexity is O(logn) BST
  for(auto a: s)
    cout << a << " ";
  cout << endl;

  cout << "Size of set: " << s.size() << endl;

  s.erase(s.begin());
  cout << "Size of set after erasing: " << s.size() << endl;

  //search the element in set
  cout << "element 5 present in set? " << s.count(5) << endl;
  cout << "element -5 present in set? " << s.count(-5) << endl;

  //find element and get its iterator
//  auto itr = s.find(5);
  set<int>::iterator itr = s.find(5);
  for(auto it=itr; it != s.end(); it++)
    cout << *it << " ";

  // empty();
  //insert, find, erase, cout -> O(logn)
  // size, begin, end O(n)
  cout << endl;

  return 0;
}