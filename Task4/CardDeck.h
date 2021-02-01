#pragma once
class CardDeck
{
	Card cards[55];
public:
	CardDeck(Card cards[55]);
	Card GetCards(int index);
};