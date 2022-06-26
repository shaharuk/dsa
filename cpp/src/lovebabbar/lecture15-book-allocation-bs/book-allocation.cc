#include<iostream>
#include<vector>

using namespace std;

bool isPossibleSolution(vector<int>& arr, int m, int mid){
  int studentCount = 1;
  int pageSum = 0;
  for(auto a: arr){
    if(pageSum+a <= mid){
      pageSum +=a;
    }
    else{
      studentCount++;
      if(studentCount > m || a > mid){
        return false;
      }
      pageSum = a;
    }
  }
  return true;
}


int allocateBooks(vector<int>& arr, int n, int m){
  int ans = 0;
  int s = 0;
  int sum = 0;
  for(auto a : arr)
    sum += a;
  int e = sum;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(isPossibleSolution(arr, m, mid)){
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
  vector<int> arr = {10, 20, 30, 40, 50, 60};
  int numOfBooks = arr.size();
  int numOfStudents = 2;
  int minAlloc = allocateBooks(arr, numOfBooks, numOfStudents);

  cout << "Ans is: "<< minAlloc;
}