#include <iostream>

using namespace std;
#ifndef state
#define state 1

class vendingMachine;
class State{
    //vendingMachine* machine;
    public:
    virtual bool addMoney(int arg)=0;
    virtual bool pushButton(int aisleNo)=0;
    virtual bool dispense(int aisleNo)=0;
};

#endif