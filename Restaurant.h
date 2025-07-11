#ifndef Menu_H
#define Menu_H

#include <vector>
#include "Menu.h"

class Customer;
class Order;

class Restaurant {
private:
    Menu menu;
    std::vector<Customer*> customers;
    std::vector<Order> orders;
public:

    Restaurant();
    Restaurant(const Restaurant& other);
    Restaurant& operator=(const Restaurant& other);
    Restaurant(Restaurant&& other) noexcept;
    Restaurant& operator=(Restaurant&& other) noexcept;
    ~Restaurant();
    void showMenu() const;
    Customer* getCustomerByName(const std::string& name);
    void placeNewOrder(const std::string& customerName);
    void viewCustomerOrderHistory(const std::string& customerName) const;
};

#endif
