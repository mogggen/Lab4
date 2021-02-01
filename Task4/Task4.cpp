#include "pch.h"
#include "Card.h"
#include "CardDeck.h"
#include <iostream>

using namespace std;

int main()
{
	Card cards[55];

	for (int i = 0; i < 55; i++)
	{
		if (i < 13)
			cards[i] = Card((i % 13) + 1, "Clubs");
		else if (i < 26)
			cards[i] = Card((i % 13) + 1, "Diamonds");
		else if (i < 39)
			cards[i] = Card((i % 13) + 1, "Hearts");
		else if (i < 52)
			cards[i] = Card((i % 13) + 1, "Spades");
		else
			cards[i] = Card(0, "Jack");
	}

	CardDeck cd(cards);
	for (int i = 0; i < 55; i++)
		cd.GetCards(i).Print();
}