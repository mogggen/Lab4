#include "pch.h"
#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

Card::Card()
{

}

Card::Card(int _rank, string _suit)
{
	rank = _rank;
	suit = _suit;
}

void Card::Print()
{
	switch (rank)
	{
	case 0:
		cout << "All";
		break;

	case 1:
		cout << "Ace";
		break;

	case 11:
		cout << "Jack";
		break;

	case 12:
		cout << "Queen";
		break;

	case 13:
		cout << "King";
		break;

	default:
		cout << rank;
		break;
	}

	cout << " of " << suit << endl;
}