/*
  Filename    : temps.cc
  Author      : Joseph Dunton
  Problem     : Cold-puter science
  Description : Computer how many days recorded were below 0 degrees
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
	int temps;
	int current;
	int total = 0;
	cin >> temps;
	for(int i = 0; i < temps; ++i)
	{
		cin >> current;
		if(current < 0)
			++total;
	}

	cout << total << endl;

}
