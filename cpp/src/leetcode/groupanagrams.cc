/*
 * Created by shaharuk shaikh on 25/05/22.
 *https://leetcode.com/problems/group-anagrams/
 *
 * Given an array of string strs, group the anagrams together.
 * You can return the answer in any order.
 *
 * An anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
 * typically using all the original letters exactly once.
 *
 * Example 1:
 * Input: strs = ["eat","tea","tan","ate","nat","bat"]
 * Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
 *
 * Example 2:
 * Input: strs = [""]
 * Output: [[""]]
 *
 * Example 3:
 * Input: strs = ["a"]
 * Output: [["a"]]
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  vector<vector<string>> v;
  unordered_map<string, vector<string>> myMap;

  for(string str: strs){
    string temp = str;
    sort(temp.begin(), temp.end());
    myMap[temp].push_back(str);
  }

  for(auto x: myMap)
    v.push_back(x.second);

  return v;
}


int main(){
  vector<string> input {"eat","tea","tan","ate","nat","bat"};
  vector<vector<string>> output = groupAnagrams(input);

  for(auto v: output){
    for(auto str: v) {
      cout << str << endl;
    }
  }

  return 0;
}