#include "DispensingState.h"
#include "../models/vendingMachine.h"
#ifndef Dstate_CPP
#define Dstate_CPP 1

    DispensingState::DispensingState(vendingMachine* arg){
      machine=arg;
     }

     bool DispensingState::addMoney(int arg){
       cout<<"dispensing!!! cannot take in money now";
       return false;
     }
     bool DispensingState::pushButton(int aisleNo){
      cout<<"dispansing!! cannot select another item now";
        return false;
     }
     bool DispensingState::dispense(int aisleNo){
        machine->balance-=machine->aisles[aisleNo].getPrice();
        machine->aisles[aisleNo].dispense();
        if(machine->balance)
        cout<<"ejecting the balance amount : Rs "<<machine->balance;
      machine->currentState=machine->noCoinInserted;
      machine->balance=0;
      return true;
     }

#endif