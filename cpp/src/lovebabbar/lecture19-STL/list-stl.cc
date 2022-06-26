#include<iostream>
#include<list>

using namespace std;


int main(){
  list<int> l;

  l.push_back(10);
  l.push_front(20);

  for(int a: l)
    cout << a << ' ';
  cout << endl;


  cout << "Size of list: " << l.size() << endl;



  l.erase(l.begin());
  cout << "after erase: ";
  for(int a: l)
    cout << a << ' ';
  cout << endl;



  // copy existing list into new one
  list<int> newl(l);
  cout << "print newl: ";
  for(int a: newl)
    cout << a << ' ';
  cout << endl;

  //create list of size 5 with each element as 100
  list<int> tl(5, 100);
  cout << "print tl: ";
  for(int a: tl)
    cout << a << ' ';
  cout << endl;
  return 0;
}