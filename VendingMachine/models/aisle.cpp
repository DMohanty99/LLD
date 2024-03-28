#include "aisle.h"

    bool aisle::getInventory(){
        return products.size();
    }
    bool aisle::dispense(){
        products.pop_back();
        return true;
    }
    bool aisle::getPrice(){
        return products[products.size()-1].getPrice();
    }
    aisle::aisle(){
        products=vector<Product>(5,Product());
    }
