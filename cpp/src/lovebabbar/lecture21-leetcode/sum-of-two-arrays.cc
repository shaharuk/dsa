/*
 *
 */

#include<iostream>
#include<vector>


using namespace std;
int main(){
  vector<int> a = {9, 9, 9};
  vector<int> b = {1, 1, 9, 9, 9};
  vector<int> ans;
  int carry = 0;
  int i = a.size()-1;
  int j = b.size()-1;

  while(i>=0 && j>=0){
    int sum = a[i--] + b[j--] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
  }
  // len array a > len array b
  while(i>=0){
    int sum = a[i--] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
  }
  // len array b > len array a
  while(j>=0){
    int sum = b[j--] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
  }

  // there is a carry is remaining
  while(carry != 0 ){
    int sum = carry;
    carry = sum/10;
    sum = sum % 10;
    ans.push_back(sum);
  }

  // reverse the ans vector
//  reverse(ans.begin(), ans.end());
  int s = 0;
  int e = ans.size() - 1;
  while(s <= e){
    swap(ans[s++], ans[e--]);
  }

  for(auto t: ans)
    cout << t << " ";
  cout << endl;

  return 0;
}