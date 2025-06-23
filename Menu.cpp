#include <iostream>
#include "Menu.h"

Menu::Menu(const Menu& other)
{
    for (int i = 0; i < other.dishes.size(); i++)
    {
        dishes.push_back(other.dishes[i]);
    }
}

Menu& Menu::operator=(const Menu& other)
{
    dishes.clear();
    for (int i = 0; i < other.dishes.size(); i++)
    {
        dishes.push_back(other.dishes[i]);
    }
    return *this;
}

Menu::Menu(Menu&& other) noexcept
{
    dishes = std::move(other.dishes);
    other.dishes.clear();
}   

Menu& Menu::operator=(Menu&& other) noexcept
{
    dishes = std::move(other.dishes);
    other.dishes.clear();

    return *this;
}

Menu::~Menu()
{
    for (int i = 0; i < dishes.size(); i++)
    {
        delete dishes[i];
    }
}

void Menu::addDish(Dish* dish)
{
    dishes.push_back(dish);
}

void Menu::displayMenu() const
{
    for (int i = 0; i < dishes.size(); i++)
    {
        dishes[i]->display();
    }
}

Dish* Menu::getDishByName(const std::string& dishName) const
{
    for (int i = 0; i < dishes.size(); i++)
    {
        if (dishes[i]->getName() == dishName)
        {
            return dishes[i];
        }
    }
    return nullptr;
}
