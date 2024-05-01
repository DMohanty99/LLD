#pragma once
#include <iostream>
#include "../include/common.h"

typedef class Rider{
    string name;
    int age;
    RATING r;
    
    public: 
    Rider(string pName, int pAge, RATING pRating ): name(pName),
    age(pAge), r(pRating) {}

    RATING getRating(){
        return r;
    }

} ;