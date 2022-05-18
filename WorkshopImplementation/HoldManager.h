#pragma once
#include<list>
#include "Item.h"
#include "Hold.h"

using namespace std;
class HoldManager
{
public:
	HoldManager(Item* item);
	~HoldManager();

	int notifyHighestPriorityHold();
	int addHold(Hold* hold);
	int removeHold(Hold* hold);

private:
	list<Hold*> holds;
	Hold* findHighestPriorityHold();



};
