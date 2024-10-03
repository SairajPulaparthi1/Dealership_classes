#include <iostream>
#include <string>
#include <vector>
#include "Showroom.h"
#pragma once
using namespace std;

class Dealership{
private:
    string name;
    unsigned int capacity;
    vector<Showroom> deship;
public:
    Dealership(string name = "Generic Dealership", unsigned int capacity = 0);
    void AddShowroom(Showroom s);
    void ShowInventory();
    float GetAveragePrice();



};