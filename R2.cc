/*
  Filename    : R2.cc
  Author      : Joseph Dunton
  Problem     : R2
  Description : S = (x + y)/2  Solve for y given x and S
*/

/************************************************************/
// System includes

#include <iostream>
#include <string>

/************************************************************/
// Using Declartions
using std::cout;
using std::cin;

/************************************************************/

int
main (int argc, char* argv[])
{
  int r1;
  int S;
  int r2;

  cin >> r1;
  cin >> S;

  r2 = (2*S) - r1;
  cout << r2;
}
