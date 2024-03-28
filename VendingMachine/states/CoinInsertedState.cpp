#include "CoinInsertedState.h"
#include "../models/vendingMachine.h"
#ifndef CIstate_CPP
#define CIstate_CPP 1

     bool CoinInsertedState::addMoney(int arg){
        if(machine!=nullptr){
            machine->balance+=arg;
            return true;
        }
        return false;
     }
     bool CoinInsertedState::pushButton(int aisleNo){
      if(aisleNo<0 || aisleNo>=machine->aisles.size()){
         cout<<"wrong aisle No";
         return false;
      }
        if( machine->aisles[aisleNo].getInventory()==0){
         cout<<"stock out chose other product";
        } 
        else if(machine->aisles[aisleNo].getPrice()>machine->balance){
         cout<<"insufficient balance";
        }
        else{
         machine->currentState=machine->dispensing;
         return machine->currentState->dispense(aisleNo);
         
        }
        
        return false;
     }
     bool CoinInsertedState::dispense(int aisleNo){
        cout<<"cannot dispense in this case as no coin is inserted";
        return false;
     }
     CoinInsertedState::CoinInsertedState(vendingMachine* arg){
      machine=arg;
     }

   #endif
