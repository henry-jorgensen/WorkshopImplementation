#pragma once
#include "Item.h"


class Magazine : public Item
{
public:
	Magazine(string name, string registration, int year, list<string> editors);
	~Magazine();

	string name;
	string registration;
	string state;
	int year;
	list<string> editors;
};

