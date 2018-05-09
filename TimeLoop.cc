/*
  Filename    : TimeLoop.cc
  Author      : Joseph Dunton
  Problem     : Stuck In A Time Loop
  Description : Repeat the Wizard's Spell N times
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
  int times;
  cin >> times;
  for (int i = 1; i <= times; ++i)
  {
    cout << i << " Abracadabra" << endl;
  }
}
