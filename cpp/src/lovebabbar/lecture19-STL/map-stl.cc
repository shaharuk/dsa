
/*
 map-> red/black tree /balanced tree implementation behind the scene
   find, insert, erase complexity O(logn)

 unordered_map -> Hash Table
  search complexity O(n)
 */

#include<iostream>
#include<map>
using namespace std;

int main(){
  map<int, string> m;
  m[1] = "shaikh";
  m[2] = "shaharuk";
  m[13] = "sadik";

  for(auto a: m)
    cout << a.first << " " << a.second << endl;
  cout << endl;

  m.insert({5, "india"});
  for(auto a: m)
    cout << a.first << " " << a.second << endl;
  cout << endl;

  //find element using count
  cout << "finding element 13 : " << m.count(13) << endl;
  cout << "finding element -13 : " << m.count(-13) << endl;


  cout << "after erase: " << endl;
  m.erase(13);
  for(auto a: m)
    cout << a.first << " " << a.second << endl;
  cout << endl;


  // iterator
  auto it = m.find(2);
  for(auto i=it; i != m.end(); i++)
    cout << (*i).first << " " << (*i).second << endl;


  return 0;

}
