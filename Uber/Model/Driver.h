#pragma once 
#include "../include/common.hpp"

class Driver {
    string name; // for now we are assuming the 
    // name as id but we can have the id 
    // member later
    bool avail;
    RATING rating;

    public:
    Driver(string pName, RATING pRating):
    name(pName), rating(pRating){
    }

    void updateAvail(bool pAvail) {
		avail = pAvail;
	}
	string getDriverName() {
		return name;
	}
	RATING getRating() {
		return rating;
	}
}