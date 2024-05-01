#include "RiderManager.h"
RiderManager * RiderManager::instance= nullptr;
mutex RiderManager::mx;
Rider * RiderManager::getRider(string id){
    if(Mapping.find(id)==Mapping.end()){
        return nullptr;
    }
    return Mapping[id];
}
void RiderManager::addRider(string id, Rider* pRider){
        Mapping[id]=pRider;
    }


 RiderManager* RiderManager::getRiderManager(){
   if(instance ==nullptr){
        mx.lock();
        if(instance==nullptr){
            instance = new RiderManager();
        }
        mx.unlock();
   }
    return instance;
}
