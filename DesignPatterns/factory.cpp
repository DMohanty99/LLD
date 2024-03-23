#include <iostream>
class vehicle{
    int name;
    public:
    virtual void PrintNoOfwheels()=0;
};
class car :public vehicle{
    public:
    void PrintNoOfwheels(){
        std::cout<<"4\n";
    }
};
class rikshaw :public vehicle{
    public:
    void PrintNoOfwheels(){
        std::cout<<"3\n";
    }
};
class motorCycle :public vehicle{
    public:
    void PrintNoOfwheels(){
        std::cout<<"2\n";
    }
};
class carfactory{
    vehicle * a;
    public:
    vehicle* getVehicle(int i){
        switch (i) {
            case 0 : a= new car; 
                break;
            case 1: a= new rikshaw;
                break;
            default:
                 a= new motorCycle;
        }
        return a;
    }
    
};

int main(){
    vehicle * a;
    carfactory obj1;
    for (int i=0;i<4;i++){
        a=obj1.getVehicle(i);
        a->PrintNoOfwheels();
    }
    return 0;
}