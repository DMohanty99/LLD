#include "product.h"
#include <vector>
#ifndef AISLE_H
#define AISLE_H 1
class aisle{
    int aisleNo;
    vector<Product> products;
    public:
    bool getInventory();
    bool dispense();
    bool getPrice();
    aisle();
};

#endif