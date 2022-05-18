#pragma once
#include "ILibraryFineStrategy.h"
class ToyFineStrategy :
    public ILibraryFineStrategy
{
protected:
    float initialFine;
    float incrementalFine;
    int weeksOverdue;
};

