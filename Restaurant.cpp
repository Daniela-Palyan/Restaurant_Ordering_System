#include "Restaurant.h"

Restaurant::Restaurant() {}

Restaurant::Restaurant(const Restaurant& other) 
{
    menu = other.menu;
    for (int i = 0; i < other.customers.size(); i++)
    {
        customers.push_back(new Customer(*other.customers[i]));   
    }
    for (int i = 0; i < other.orders.size(); i++)
    {
        orders.push_back(other.orders[i]);
    }
}

Restaurant& Restaurant::operator=(const Restaurant& other) 
{
    menu = other.menu;
    customers.clear();
    for (int i = 0; i < other.customers.size(); i++)
    {
        customers.push_back(new Customer(*other.customers[i]));   
    }
    orders.clear();
    for (int i = 0; i < other.orders.size(); i++)
    {
        orders.push_back(other.orders[i]);
    }
    return *this;
}

Restaurant::~Restaurant() 
{
    for (int i = 0; i < customers.size(); i++)
    {
        delete customers[i];
    }
}

void Restaurant::showMenu() const 
{
    menu.displayMenu();
}

Customer* Restaurant::getCustomerByName(const std::string& name) 
{
    for (int i = 0; i < customers.size(); i++)
    {
        if (customers[i]->getName() == name)
        {
            return customers[i];
        }
    }
    return nullptr;
}

void Restaurant::placeNewOrder(const std::string& customerName) 
{
    Order newOrder(getCustomerByName(customerName));
    orders.push_back(newOrder);
}