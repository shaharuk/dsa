/*
 FIFO -> First In First Out
 LILO -> last in last out
 */

#include<iostream>
#include<queue>
using namespace std;

int main(){
  queue<string> q;
  q.push("shaikh");
  q.push("shaharuk");
  q.push("sadik");

  cout << "Size of queue: " << q.size() << endl;

  cout << "First element in queue: " << q.front() << endl;

  q.pop();
  cout << "First element after pop: " << q.front() << endl;
  return 0;
}
