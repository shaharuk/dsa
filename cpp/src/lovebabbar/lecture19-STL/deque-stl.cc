
#include<iostream>
#include<deque>

using namespace std;

int main(){
  deque<int> d;

  d.push_back(1);
  d.push_back(2);
  d.push_front(3);
  d.push_front(4);
  for(int a: d)
    cout << a << ' ';
  cout << endl;


  cout << "Print element at index 1: " << d.at(1) << endl;

  cout << "front element: " << d.front() << endl;
  cout << "back element: " << d.back() << endl;

  cout << "Empty of not: " << d.empty() << endl;


  d.pop_back();
  for(int a: d)
    cout << a << ' ';
  cout << endl;

  d.pop_front();
  for(int a: d)
    cout << a << ' ';
  cout << endl;


  // erase
  cout << "Size before erase: " << d.size() << endl;
  d.erase(d.begin(), d.begin()+1);
  cout << "Size after erase: " << d.size() << endl;
  return 0;
}