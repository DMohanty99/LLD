
#include "vendingMachine.h"

    vendingMachine::vendingMachine(){
       noCoinInserted=new NoCoinInsertedState(this);
       coinInserted=new  CoinInsertedState(this);
       dispensing = new DispensingState(this);
       currentState=noCoinInserted;
       balance=0;
       aisles= vector<aisle>(5,aisle());
    }
    bool vendingMachine::insertCoin(int arg){
        return currentState->addMoney(arg);
    }

    bool vendingMachine::selectProductAndDispense(int aisleNo){
        return currentState->pushButton(aisleNo);
         
    }
    bool vendingMachine::cancel(){
        if(currentState==noCoinInserted){
            cout<<"no transaction to abort \n";
            return false;
        }
        cout<<"dispensing the money and cancellng the transaction\n";
        cout<<"ejecting Rs: "<<balance<<"\n";
        balance=0;
        currentState=noCoinInserted;
        return true;
    }

