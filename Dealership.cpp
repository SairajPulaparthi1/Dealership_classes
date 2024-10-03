#include<iostream>
#include "Dealership.h"

Dealership::Dealership(string name, unsigned int capacity){
    this->capacity = capacity;
    this->name = name;

}

void Dealership::AddShowroom(Showroom s) {
    if (deship.size() == capacity) {

        cout << "Dealership is full, can't add another showroom!" << endl;
    }
    else {
        deship.push_back(s);
    }
}

float Dealership::GetAveragePrice() {
    float average_price;
    float sumPrice = 0.0;
    float total_Vehicles = 0;

    if (deship.size() == 0) {
        average_price = 0.0;
    }
    else {
        for (int i = 0; i < deship.size(); ++i) {
            for (int j = 0; j < deship.at(i).GetVehicleList().size(); ++j) {
                sumPrice += deship.at(i).GetVehicleList().at(j).GetPrice();
                total_Vehicles += 1;
            }
        }
        average_price = sumPrice / total_Vehicles;
    }
    return average_price;
}

void Dealership::ShowInventory(){
    if(!deship.empty()){
        for (int i = 0; i < deship.size(); ++i) {

            deship.at(i).ShowInventory();
            cout << endl;
        }

    }
    else {
        cout <<  "Generic Dealership is empty!" << endl;
    }
    cout <<"Average car price: $" << GetAveragePrice();
}

