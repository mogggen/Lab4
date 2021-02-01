#pragma once
#include <iostream>


class Card
{
	int rank;
	std::string suit;
public:
	Card();
	Card(int _rank, std::string _suit);
	void Print();
};