#ifndef VM
#define VM 1
#include "aisle.h"
#include "../states/state.h"
#include "../states/CoinInsertedState.h"
#include "../states/NoCoinInsertedState.h"
#include "../states/DispensingState.h"

class vendingMachine{
    public :
    vector<aisle> aisles;
    int balance;
    State * coinInserted;
    State * noCoinInserted;
    State * dispensing;
    State * currentState;
    
    vendingMachine();
    bool insertCoin(int arg);
    bool selectProductAndDispense(int aisleNo);
    bool cancel();
};

#endif