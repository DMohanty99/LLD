#include <string>
#include <vector>
#include <iostream>
using namespace std;

class student {
    protected:
    int age;
    string name;
    public:
    virtual string getName()=0;
    virtual int getAge()=0;
};

class topper: public student{
    public:
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    topper(string arg1, int arg2){
        name=arg1;
        age=arg2;
    }

};

class boy {
    private:
    int age;
    string name;

    public:
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    boy(string arg1, int arg2){
        name=arg1;
        age=arg2;
    }
};

class boyStudentAdaprtor : public student{
    private:
    boy temp=boy("abcd",0);
    public:
    boyStudentAdaprtor(boy arg){
        temp=arg;
        name=arg.getName();
        age=arg.getAge();
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};

int main(){
    student * s1= new topper("Radha",8);
    boy * b1=new boy("Krishna",8);
    student * s2 = new boyStudentAdaprtor(*b1);
    vector<student*> studentList;
    studentList.push_back(s1);
    studentList.push_back(s2);
    cout<<"sl no \t name \t age \n";
    for(int i=0;i<studentList.size();i++){
        cout<<i<<". \t"<<studentList[i]->getName()<<"\t"<<studentList[i]->getAge()<<"\n";
    }

    return 0;
}