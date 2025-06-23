#include <iostream>
#include "Order.h"
#include "Customer.h"


Order::Order(Customer* customer) : customer(customer) {}

Order::Order(const Order& other)
{
    customer = new Customer(*other.customer);
    for (int i = 0; i < other.orderedDishes.size(); i++)
    {
        orderedDishes.push_back(other.orderedDishes[i]);
    }
    totalPrice = other.totalPrice;
}

Order& Order::operator=(const Order& other)
{
    customer = new Customer(*other.customer);
    orderedDishes.clear();
    for (int i = 0; i < other.orderedDishes.size(); i++)
    {
        orderedDishes.push_back(other.orderedDishes[i]);
    }
    totalPrice = other.totalPrice;
    return *this;
}

Order::Order(Order&& other) noexcept
{
    customer = other.customer;
    other.customer = nullptr;
    orderedDishes = std::move(other.orderedDishes);
    totalPrice = other.totalPrice;
}

Order& Order::operator=(Order&& other) noexcept
{
    customer = other.customer;
    other.customer = nullptr;
    orderedDishes = std::move(other.orderedDishes);
    totalPrice = other.totalPrice;
    return *this;
}
