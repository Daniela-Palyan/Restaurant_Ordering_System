#include <iosream>
#include "Appetizer.h"

Appetizer::Appetizer(std::string dishName, double dishPrice, bool spicy)
{
    name = dishName;
    price = dishPrice;
    isSpicy = spicy;
}

void Appetizer::display() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Spicy: " << (isSpicy ? "Yes" : "No") << std::endl;
}

