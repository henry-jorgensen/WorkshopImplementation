#pragma once
#include "ILibraryFineStrategy.h"
class BookFineStrategy :
    public ILibraryFineStrategy
{
protected:
   float popularityPercentage;
};

