/*
  Filename    : TakeTwoStones.cc
  Author      : Joseph Dunton
  Problem     : Take Two Stones
  Description : Which player takes the last stone, in a pool of two players.
*/

/************************************************************/
// System includes

#include <iostream>
#include <string>

/************************************************************/
// Using Declartions
using std::cout;
using std::endl;
using std::cin;

/************************************************************/

int
main (int argc, char* argv[])
{
  int stones;
  cin >> stones;
  if((stones % 2) != 0)
    cout << "Alice" << endl;
  else
    cout << "Bob" << endl;
}
