#include "pch.h"
#include "Card.h"
#include "CardDeck.h"
#include <iostream>

CardDeck::CardDeck(Card _cards[55])
{
	for (int i = 0; i < sizeof(cards) / sizeof(*cards); i++)
		cards[i] = _cards[i];
}

Card CardDeck::GetCards(int index)
{
	return cards[index];
}