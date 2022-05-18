#pragma once
#include "Patron.h"
#include "HoldManager.h"

class Hold
{
protected:
	Patron* user;
	tm datetime;
	bool isUrgent;

	int setDate();
	int setIsUrgent();
public:
	int notifyPatron();

};

