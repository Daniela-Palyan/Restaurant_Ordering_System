#include <iostream>
#include "Entree.h"

Entree::Entree(std::string dishName, double dishPrice, int cal)
{
    name = dishName;
    price = dishPrice;
    calories = cal;
}

void Entree::display() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Calories: " << calories << std::endl;
}