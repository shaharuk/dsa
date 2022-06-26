#include<iostream>
#include<vector>
using namespace std;

bool isPossibleSolution(vector<int>& arr, int painterCount, int mid){
  int tempPainterCount = 1;
  int tempSolution = 0;

  for(auto a: arr){
    if(tempSolution+a <= mid){
      tempSolution += a;
    }
    else{
      tempPainterCount++;
      if(tempPainterCount > painterCount || tempSolution > mid)
        return false;
      tempSolution = a;
    }
  }
  return true;
}


int findMinTimeRequired(vector<int>& arr, int painterCount){
  int s = 0;
  int sum = 0;

  for(auto a : arr)
    sum += a;
  int e = sum;
  int ans = 0;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(isPossibleSolution(arr, painterCount, mid)){
      ans = mid;
      e = mid -1;
    }
    else{
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}


int main(){
  vector<int> arr = {5, 5, 5, 5};
  int painters = 2;
  int minTimeRequired = findMinTimeRequired(arr, painters);
  cout << "Minimum time required: "<< minTimeRequired << endl;
  return 0;
}