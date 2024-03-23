#include <iostream>
//#include <bits/stdc++.h>
class DICoreMain{
    DICoreMain(){

    }
    
    DICoreMain(DICoreMain&) =delete;
    DICoreMain(DICoreMain&&) =delete;
    DICoreMain operator=(DICoreMain&) =delete;
    DICoreMain operator=(DICoreMain&&)= delete;

    public:
    static DICoreMain& getInstance(){
        static DICoreMain m_inst;
        return m_inst;
    }
    void doSomething(){
        std::cout<<"it does something";
    }
};

int main(){

    DICoreMain::getInstance().doSomething();
    return 0;
}