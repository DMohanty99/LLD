#include "state.h"
#ifndef NCIstate
#define NCIstate 1
class NoCoinInsertedState : public State{
    vendingMachine* machine;
    public:
     bool addMoney(int arg);
     bool pushButton(int aisleNo);
     bool dispense(int aisleNo);
     NoCoinInsertedState(vendingMachine* arg);
};
#endif