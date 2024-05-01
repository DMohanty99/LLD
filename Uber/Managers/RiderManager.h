#pragma once
#include "../Model/Rider.h"
#include mutex
class RiderManager{
    static RiderManager * instance;
    unordered_map<string, Rider*> Mapping;
    static mutex mx;
    RiderManager(){}
    public:
    static RiderManager* getRiderManager();
    Rider * getRider(string id);
    void addRider(string id, Rider* pRider);
}