#pragma once
#include <string>
#include<list>

using namespace std;
class Item
{
public:
	Item(string title, string registration, int year);
	~Item();

	string name;
	string registration;
	string state;
	int year;

private:

};

