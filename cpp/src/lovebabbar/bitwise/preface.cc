//
// Created by shaharuk shaikh on 01/06/22.
//

#include<iostream>

using namespace std;

int main(){
  int a = 4;
  int b = 6;

/*
  4 -> 100
  6 -> 110
  -----------
       100 -> 4*/
  cout << "a&b : " << (a&b) << endl;

  /*
  4 -> 100
  6 -> 110
  -----------
       110 -> 6
   */
  cout << "a|b : " << (a|b) << endl;

  /*
      4 -> 100
      -----------
   */
  cout << "~a : " << (~a) << endl;
  /*
      4 -> 100
      6 -> 110
      -----------
            010 -> 2
   */
  cout << "a^b : " << (a^b) << endl;


  /*left shift operator << shift the bitwise representations to the left
  if left shift by 1 -> then multiple the number by 2
  if left shift by 2 -> then multiply the number by 4
  and so on....*/



  /*right shift operator -> shift bitwise representation to the right
  if right shift by 1 -> divide the number by 2
  if right shift by 2 -> divide the number by 4
  and so on ....*/


  // no rotation
  // positive numbers always padded with 0
  //negative numbers padding depends on the compiler(it can be 0 or 1)
  return 0;


}