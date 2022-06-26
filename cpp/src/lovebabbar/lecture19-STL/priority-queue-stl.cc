/*
 *
 */

#include<iostream>
#include<queue>
using namespace std;

int main(){
  // MAx Heap: greatest element first fetched.
  priority_queue<int> maxHeap;

  maxHeap.push(1);
  maxHeap.push(3);
  maxHeap.push(2);
  maxHeap.push(0);

  int size = maxHeap.size();
  for(int i=0; i< size; i++){
    cout << maxHeap.top() << " ";
    maxHeap.pop();
  }
  cout << endl;

  // Min Heap;
  priority_queue<int, vector<int>, greater<int>> minHeap;
  minHeap.push(5);
  minHeap.push(1);
  minHeap.push(0);
  minHeap.push(4);
  minHeap.push(3);
  int size2 = minHeap.size();
  for(int i=0; i<size2; i++){
    cout << minHeap.top() << " ";
    minHeap.pop();
  }
  cout << endl;

  cout << "Is min heap empty: " << minHeap.empty() << endl;
  return 0;
}