#include "NoCoinInsertedState.h"
#include "../models/vendingMachine.h"
     bool NoCoinInsertedState::addMoney(int arg){
        if(machine!=nullptr){
            machine->balance+=arg;
            machine->currentState=machine->coinInserted;
            return true;
        }
        return false;
     }
     bool NoCoinInsertedState::pushButton(int aisleNo){
        cout<<"no amount inserted";
        return false;
     }
     bool NoCoinInsertedState::dispense(int aisleNo){
        cout<<"cannot dispense in this case as no coin is inserted";
        return false;
     }
     NoCoinInsertedState::NoCoinInsertedState(vendingMachine* arg){
      machine=arg;
     }
