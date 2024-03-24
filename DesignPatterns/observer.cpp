#include <iostream>
#include <vector>

using namespace std;
//publisher that publishes event
//subscribers that subscribe to events

class observer{
    public:
    virtual void handleEvent1()=0;
};

class publisher{

    vector<observer*> observers;
    public:
    void addObserver(observer* arg){
        observers.push_back(arg);
    }
    void emitEvent(){
        for (int i=0;i<observers.size();i++){
            observers[i]->handleEvent1();
        }
    }


};


class observer1: public observer {
    public:
    void handleEvent1(){
        cout<<"event 1 published from observer 1 \n";
    }
};
class observer2: public observer {
    public:
    void handleEvent1(){
        cout<<"event 1 published from observer 2 \n";
    }
};
int main(){
    publisher p1;
    observer* o1 = new observer1();
    observer* o2 = new observer2();

    p1.addObserver(o1);
    p1.addObserver(o2);

    p1.emitEvent();
}