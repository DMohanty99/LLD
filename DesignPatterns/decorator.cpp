#include <iostream>
#include <string.h>
using namespace std;
// it is used to incorporate decorators / add-ons
// to various base classes 

//base class
class burger{
    public:
    virtual void getName() = 0;
    virtual int getPrice() = 0;
};
//two basic burger types (without any decorator)

class zingerBurger:public burger{
    public:
    void getName() override{
        cout<<"zinger burger";
    }
    int getPrice()override{
        return 180;
    }
};


class mcAlooTikkiBurger:public burger{
    public:
    void getName() override{
        cout<<"mcAlooTikki burger";
    }
    int getPrice()override{
        return 100;
    }
};

// now we have two base classes ready 
// we can have two add-ons for example :- 
// extra cheese && extra mayo
// now we have all the systems configured for the 
// burger object and therefore we need to create new 
// burger objects . However we will have to create 
// m x n new classes where m is the number of burgers and n is the 
// number of toppings
// however there is a fix to this - decorator classes
// decorator classes are like normal burger classes 
// however they have a burger class instance in them as they build
// on top of other burger classes
// we can create another layer of interface for the decorator class

// decorator interface

class decorator: public burger{
    protected:
    burger *inst;
};
//this is the extra cheese decorator
class withAddedCheese : public decorator{
    public:
    void getName()override{
        inst->getName();
        cout<<" with added cheese ";
    }
    int getPrice()override{
        return inst->getPrice()+50;
    }
    withAddedCheese(burger* arg){
        this->inst=arg;
    }
};

//this is the extra mayo decorator
class withAddedMayo : public decorator{
    public:
    void getName()override{
        inst->getName();
        cout<<" with added Mayo ";
    }
    int getPrice()override{
        return inst->getPrice()+50;
    }
    withAddedMayo(burger *arg){
        this->inst=arg;
    }
};
// with the decorator classes being essentially of the same base type 
// means that we can use the decorators in a nested fashion as well

int main(){
    burger *b1=new zingerBurger();
    b1->getName();
    cout<<b1->getPrice()<<"\n";

    burger *b2= new withAddedCheese(b1);
    b2->getName();
    cout<<b2->getPrice()<<"\n";

    burger *b3= new withAddedMayo(b2);
    b3->getName();
    cout<<b3->getPrice()<<"\n";

    burger *b4= new withAddedMayo(b3);
    b4->getName();
    cout<<b4->getPrice()<<"\n";


    return 0;
}
