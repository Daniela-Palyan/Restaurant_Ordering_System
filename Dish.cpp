#include <iosream>
#include "Dish.h"

Dish::Dish(std::string dishName, double dishPrice)
{
    name = dishName;
    price = dishPrice;
}

Dish::Dish(const Dish& other)
{
    name = other.name;
    price = other.price;
}

Dish& Dish::operator=(const Dish& other)
{
    name = other.name;
    price = other.price;
    return *this;
}

Dish::Dish(Dish&& other) noexcept
{
    name = std::move(other.name);
    price = std::move(other.price);
}

Dish& Dish::operator=(Dish&& other) noexcept
{
    name = std::move(other.name);
    price = std::move(other.price);
    return *this;
}   

void Dish::display() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
}

double Dish::getPrice() const
{
    return price;
}

std::string Dish::getName() const
{
    return name;
}
