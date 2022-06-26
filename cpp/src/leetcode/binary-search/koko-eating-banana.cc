/*
 *
 */
#include<iostream>
#include<vector>

using namespace std;

int findOptimal1(vector<int>& piles, int hours){
  int s = 1;
  int e = INT_MIN;
  for(auto a: piles)
    e = max(e, a);

  int mid = 0;
  while(s<=e){
    int hrsTaken = 0;
    mid = s + (e-s)/2;
    for(auto a: piles)
      hrsTaken = hrsTaken + (a+mid-1)/mid;
    if(hrsTaken > hours)
      s = mid +1;
    else
      e = mid -1;
  }
  return s;
}

int main(){
  vector<int> piles = {3, 6, 7, 11};
  int hours = 8;

  int speedK = findOptimal1(piles, hours);

  cout << "Optimal speed of eating bananas: " << speedK << endl;
//  cout << 6%6 << endl;
  return 0;
}