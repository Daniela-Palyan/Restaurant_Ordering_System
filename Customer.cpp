#include "Customer.h"

Customer::Customer(std::string customerName, std::string contact) : name(customerName), contactInfo(contact) {}

Customer::Customer(const Customer& other) : name(other.name), contactInfo(other.contactInfo)
{
    for (int i = 0; i < other.orderHistory.size(); i++)
    {
        orderHistory.push_back(other.orderHistory[i]);
    }
}

Customer& Customer::operator=(const Customer& other)
{
    name = other.name;
    contactInfo = other.contactInfo;
    orderHistory.clear();
    for (int i = 0; i < other.orderHistory.size(); i++)
    {
        orderHistory.push_back(other.orderHistory[i]);
    }
    return *this;
}

Customer::Customer(Customer&& other) noexcept
{
    name = std::move(other.name);
    contactInfo = std::move(other.contactInfo);
    orderHistory = std::move(other.orderHistory);
}

Customer& Customer::operator=(Customer&& other) noexcept
{
    name = std::move(other.name);
    contactInfo = std::move(other.contactInfo);
    orderHistory = std::move(other.orderHistory);
    return *this;
}

void Customer::placeOrder(Order order)
{
    orderHistory.push_back(order);
}

void Customer::viewOrderHistory() const
{
    for (int i = 0; i < orderHistory.size(); i++)
    {
        orderHistory[i].displayOrder();
    }
}

std::string Customer::getName() const
{
    return name;
}
