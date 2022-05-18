#pragma once
#include <string>
#include<list>

#include "HoldManager.h"

using namespace std;
class Item
{
public:
	Item();
	Item(string title, string registration, int year);
	~Item();

	string name;
	string registration;
	string state;
	int year;

private:
	HoldManager holdManager;
};

