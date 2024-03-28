#include "state.h"
#ifndef CIstate
#define CIstate 1
class CoinInsertedState :public State{
    vendingMachine* machine;
    public:
     bool addMoney(int arg);
     bool pushButton(int aisleNo);
     bool dispense(int aisleNo);
     CoinInsertedState(vendingMachine* arg);
};
#endif