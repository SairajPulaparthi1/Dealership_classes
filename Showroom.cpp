#include "Showroom.h"
#include <iostream>
using namespace std;
Showroom::Showroom(string name_one, unsigned int cy){
    name = name_one;
    capacity = cy;
}
vector<Vehicle> Showroom::GetVehicleList(){

    vector<Vehicle> return_Veh = vehicles;
    return return_Veh;
}
void Showroom:: AddVehicle(Vehicle v) {

    if(vehicles.size() >= capacity){
        cout << "Showroom is full! Cannot add "<< v.GetYearMakeModel() << endl;
    }
    else {
        vehicles.push_back(v);

    }
}

void Showroom:: ShowInventory() {

    if (!vehicles.empty()){
        cout <<"Vehicles in " << name << endl;
        for (int i = 0; i < vehicles.size(); ++i){
            vehicles[i].Display();
        }
    } else {
        cout << "Unnamed Showroom is empty!"<< endl;
    }

}

float Showroom::GetInventoryValue(){
    float sumValue = 0.0;


    for (int i = 0; i < vehicles.size(); ++i ){
        sumValue += vehicles[i].GetPrice();
    }

    return sumValue;

}







