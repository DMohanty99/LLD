#include <iostream>
//builder pattern 
class Car{
    int engine;
    int battery;
    int colour;
    public:
    Car(int arg1,int arg2 , int arg3){
        engine=arg1;
        battery=arg2;
        colour=arg3;
    }
    void demo();

};
void Car::demo(){
    std::cout<<"\n"<<"engine type:- "<<engine<<"\n"
    <<"battery type:- "<<battery<<"\n"
    <<"colour type:- "<<colour<<"\n";
}
class CarBuilder{
    int engine;
    int battery;
    int colour;
    
    
    public :
    CarBuilder();
    Car build();
    CarBuilder setEngine(int arg);
    CarBuilder setBattery(int arg);
    CarBuilder setColour(int arg);

};
CarBuilder::CarBuilder(){
    engine=0;
    battery=0;
    colour=0;
}
CarBuilder CarBuilder::setEngine(int arg){
    engine=arg;
    return *this;
}
CarBuilder CarBuilder::setBattery(int arg){
    battery=arg;
    return *this;
}
CarBuilder CarBuilder::setColour(int arg){
    colour=arg;
    return *this;
}
Car CarBuilder::build(){
    Car instance=Car(engine,battery,colour);
    return instance;
}





int main(){
    CarBuilder inst1;
    Car inst= inst1.setEngine(1).setBattery(2).setColour(3).build();
    inst.demo();
    return 0;
}