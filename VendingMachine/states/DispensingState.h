#include "state.h"
#ifndef Dstate
#define Dstate 1
class DispensingState : public State{
    vendingMachine* machine;
    public:
    DispensingState(vendingMachine* arg);
     bool addMoney(int arg);
     bool pushButton(int aisleNo);
     bool dispense(int aisleNo);

};
#endif