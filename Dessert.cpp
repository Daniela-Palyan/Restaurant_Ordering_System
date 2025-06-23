#include <iostream>
#include "Dessert.h"

Dessert::Dessert(std::string dishName, double dishPrice, bool nuts)
{
    name = dishName;
    price = dishPrice;
    containsNuts = nuts;
}

void Dessert::display() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Contains Nuts: " << (containsNuts ? "Yes" : "No") << std::endl;
}
