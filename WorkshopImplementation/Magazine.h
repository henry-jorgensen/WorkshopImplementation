#pragma once
#include "Item.h"
#include<list>

class Magazine : public Item
{
public:
	Magazine(string name, string registration, int year);
	~Magazine();

	string name;
	string registration;
	string state;
	int year;
	list<string> editors;
};

