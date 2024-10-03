#include <string>
#include <vector>
#include "Vehicle.h"
#pragma once
using namespace std;

class Showroom{
private:
    string name;
    vector<Vehicle> vehicles;
    unsigned int capacity;

public:
    Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);
    vector<Vehicle> GetVehicleList();

    void AddVehicle (Vehicle v);
    void ShowInventory();
    float GetInventoryValue();
};
