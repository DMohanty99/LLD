#include <string>
#ifndef PRODUCT_H
#define PRODUCT_H 1
using namespace  std;

class Product{
    string name;
    string description;
    int price;
    public:
    int getPrice();
    Product();
};

#endif