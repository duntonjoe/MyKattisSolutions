/*
  Filename    : Bela.cc
  Author      : Joseph Dunton
  Problem     : Bela
  Description : Compute the score of a card game based on hands and respective rules
*/

/************************************************************/
// System includes

#include <iostream>
#include <string>
#include <map>
/************************************************************/
// Using Declartions
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

/************************************************************/

int
main (int argc, char* argv[])
{	
	map<char, int> domScores;
	domScores['A'] = 11;
	domScores['K'] = 4;
	domScores['Q'] = 3;
	domScores['J'] = 20;
	domScores['T'] = 10;
	domScores['9'] = 14;
	domScores['8'] = 0;
	domScores['7'] = 0;

	map<char, int> subScores;
	subScores['A'] = 11;
	subScores['K'] = 4;
	subScores['Q'] = 3;
	subScores['J'] = 2;
	subScores['T'] = 10;
	subScores['9'] = 0;
	subScores['8'] = 0;
	subScores['7'] = 0;

	int n = 0;
	cin >> n;

	char domSuit;
	cin >> domSuit;
	
	int score = 0;

	string card;
	
	for (int i = 0; i <=(4*n); i++)
	{
		getline(cin, card);
		if (domSuit != card[1])
		{
			score += subScores[card[0]];
		}
		else
		{
			score += domScores[card[0]];
		}

	}
	cout << score;
}
