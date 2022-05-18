#pragma once
#include "ILibraryFineStrategy.h"
class BoardGameFineStrategy :
    public ILibraryFineStrategy
{
protected:
    float initialFine;
    float incrementalFine;
    int weeksOverdue;

};

