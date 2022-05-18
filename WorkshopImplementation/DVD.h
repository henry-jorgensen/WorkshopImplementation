#pragma once
#include "Item.h"


class DVD : public Item
{
public:
	DVD(string name, string registration, int year, list<string> directors, list<string> actors, list<string> genres);
	~DVD();

	string name;
	string registration;
	string state;
	int year;
	list<string> directors;
	list<string> actors;
	list<string> genres;
};

