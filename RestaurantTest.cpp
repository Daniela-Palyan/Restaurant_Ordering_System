#include <gtest/gtest.h>
#include "Restaurant.h"
#include "Customer.h"
#include "Order.h"
#include "Appetizer.h"

TEST(RestaurantTest, AddCustomerAndRetrieve) {
    Restaurant r;
    Customer c("Alice", 1);
    r.addCustomer(c);

    EXPECT_TRUE(r.hasCustomer(1));
    EXPECT_FALSE(r.hasCustomer(2));
}

TEST(RestaurantTest, AddOrderAndPrintHistory) {
    Restaurant r;
    Customer c("Bob", 2);
    r.addCustomer(c);

    Order order(2);
    order.addDish(new Appetizer("Bruschetta", 5.99));
    r.addOrder(order);

    // To check order history output, you might redirect stdout or
    // provide a method that returns the history string for testing
    EXPECT_NO_THROW(r.printCustomerOrderHistory(2));
}
