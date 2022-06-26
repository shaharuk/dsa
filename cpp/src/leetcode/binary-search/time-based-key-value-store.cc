/*
 https://leetcode.com/problems/time-based-key-value-store/
 */

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
class TimeMap{
 public:
  unordered_map<string, vector<pair<int, string>>> store;
  TimeMap() = default;

  void set(string key, string value, int timestamp){
      store[key].push_back({timestamp, value});
  }
  string get(string key, int timestamp){
    auto &v = store[key];
    int s = 0;
    int e = v.size()-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
      if(timestamp >= v[mid].first){
        ans = mid;
        s = mid + 1;
      }
      else
        e = mid - 1;
      mid = s + (e-s)/2;
    }
    if(ans == -1)
      return "";
    return v[ans].second;
  }
};

int main(){
  TimeMap timeMap = *new TimeMap();
  timeMap.set("foo", "bar", 1);
  cout << "Created a map" << endl;

  cout << timeMap.get("foo", 1) << endl;
  cout << timeMap.get("foo", 3) << endl;

  timeMap.set("foo", "bar2", 4);
  cout << timeMap.get("foo", 4) << endl;
  cout << timeMap.get("foo", 5) << endl;
  cout << timeMap.get("foo", 1) << endl;
}