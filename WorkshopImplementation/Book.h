#pragma once
#include "Item.h"
class Book : public Item
{
public:

	Book(string title, string registration, int year, string author, list<string> genres);
	~Book();

	string name;
	string registration;
	string state;
	int year;
	string author;
	list<string> genres;
};

