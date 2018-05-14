/*
  Filename    : QuadrantSelection.cc
  Author      : Joseph Dunton
  Problem     : Quadrant Selection
  Description : Return the quadrant a given order pair would be within.
*/

/************************************************************/
// System includes

#include <iostream>
#include <string>

/************************************************************/
// Using Declartions
using std::cout;
using std::cin;
using std::endl;

/************************************************************/

int
main (int argc, char* argv[])
{
  int x;
  int y;
  int q;

  cin >> x;
  cin >> y;

  if (x > 0 && y > 0)
       q = 1;
  else if (x < 0 && y > 0)
       q = 2;
  else if (x < 0 && y < 0)
       q = 3;
  else if (x > 0 && y < 0)
       q = 4;

  cout << q << endl;

}
