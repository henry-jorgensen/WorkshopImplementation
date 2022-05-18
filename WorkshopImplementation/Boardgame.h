#pragma once
#include "Item.h"
class Boardgame : public Item
{
public:
	Boardgame(string title, string registration, int year, list<string> designers, int players, list<string> genres);
	~Boardgame();

	string name;
	string registration;
	string state;
	int year;
	list<string> designers;
	int players;
	list<string> genres;
};

