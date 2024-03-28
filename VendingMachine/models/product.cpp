#include "product.h"
using namespace  std;

    int Product::getPrice(){
        return price;
    }
    Product::Product(){
        name="default Product";
        description="generic product to fill the machine for testing";
        price=2;
    }
