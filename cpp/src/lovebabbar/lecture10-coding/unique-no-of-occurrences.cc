

#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

int main(){
  int arr[2] = {6,6};
//  int arr[10] = {1, 1, 5, 4, 6, 100, 2, 5, 4, 6};
//  int size = sizeof(arr)/sizeof(arr[0]);
  unordered_map<int,int>m;
  for(auto it:arr){
    m[it]++;
  }
  set<int>s;
  for(auto it:m)
    s.insert(it.second);

  cout << "Unique occurrences? = " << (s.size() == m.size()) << endl;

  return 0;
}
