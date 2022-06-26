/*
 * Created by shaharuk shaikh on 24/05/22.
 * Given two string s and t, return true if t is an anagram of s, and false otherwise.
 *
 * An anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
 * typically using all the original letters exactly once.
 */

#include<iostream>

using namespace std;

bool isAnagram(string s, string t) {
  int charAt[26] = {0};
  if(s.length() != t.length()) return false;

  for(int i = 0; i < s.length(); i++) {
    charAt[s[i] - 'a']++;
    charAt[t[i] - 'a']--;
  }

  for(int j : charAt){
    if(j != 0) return false;
  }
  return true;
}


int main(){
  string s{"anagtam"};
  string t{"nagaram"};
  bool isit = isAnagram(s, t);
  if(isit)
    cout << "The strings are anagram" << endl;
  else
    cout << "The strigs are NOT anagram" << endl;
  return 0;
}
