#include "models/vendingMachine.h"
#include <iostream>
using namespace std;


int main(){
    int choice=1;
    int option=3;
    int amount=0;
    int aisleNo=0;
    vendingMachine mac1;
    do{
        cout<<"choice: \t button \n insert coin \t 1 \n choose item aisle and dispense \t 2 \n cancel \t 3 \n";
        cin>>option;
        switch (option){
            case 1: cout<<"enter amount\n";
            cin>>amount;
            mac1.insertCoin(amount);
            break;
            case 2: cout<<"enter aisle no\n";
            cin>>aisleNo;
            mac1.selectProductAndDispense(aisleNo);
            break;
            case 3: 
            mac1.cancel();
            break;
            default:
            cout<<"wrong input selection \n";
        

        }
        cout<<"do you want to continue? y->1 / n->0?\n";
        cin>>choice;

    }while(choice==1);
    return 0;
}