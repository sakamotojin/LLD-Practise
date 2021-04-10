//
// Created by Sakamoto Jin on 4/8/2021.
//
#include "../Models/Vehicle.h"
#include "VehicleFactory.h"
#include <vector>
#include <map>
#include <set>
#ifndef RENTALSYSTEM_VEHICLEMANAGER_H
#define RENTALSYSTEM_VEHICLEMANAGER_H


class VehicleManager {

private:
    std::vector<Vehicle*> VehicleList;
    std::map<int, Vehicle*> VehicleById;
    std::set<int> VehicleIdList;

public:
    VehicleManager(){

    }
    VehicleManager(VehicleManager &other) = delete;

    void operator=(const VehicleManager &) = delete;


    int addVehicle(VehicleType Type , double fare){
        int new_id = VehicleList.size()+1;
        VehicleById[new_id] = VehicleFactory::getVehicle(new_id ,Type , fare);
        VehicleList.push_back(VehicleById[new_id]);
        VehicleIdList.insert(new_id);

    }

    bool isVehicleExists(int id){
        return VehicleIdList.find(id) != VehicleIdList.end();
    }

    Vehicle* getVehicleById(int id){
        return VehicleById[id];
    }

    std::set<std::pair<double,int>> getVehicleList(){
        std::set<std::pair<double, int>> vehicleIdListSortedByFare;

        for(auto &i : this->VehicleList) {
            vehicleIdListSortedByFare.insert({i->getFare() , i->getId()});
        }
        return  vehicleIdListSortedByFare;
    }

    std::set<std::pair<double,int>> getVehiclesByType(VehicleType Type){
        std::set<std::pair<double, int>> vehicleType;
        for(auto &i : VehicleList){
            if(i->getVehicleType() == Type) vehicleType.insert({i->getFare(),i->getId()});
        }
        return vehicleType;
    }

};


#endif //RENTALSYSTEM_VEHICLEMANAGER_H
