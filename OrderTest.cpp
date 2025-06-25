#include <gtest/gtest.h>
#include "Order.h"
#include "Appetizer.h"

TEST(OrderTest, AddDishAndCount) {
    Order order(1);
    EXPECT_EQ(order.getDishCount(), 0);

    Appetizer* dish = new Appetizer("Bruschetta", 5.99);
    order.addDish(dish);
    EXPECT_EQ(order.getDishCount(), 1);

    // Clean up to avoid memory leaks
    order.clearDishes();
}

TEST(OrderTest, CalculateTotalPrice) {
    Order order(1);
    order.addDish(new Appetizer("Bruschetta", 5.99));
    order.addDish(new Appetizer("Wings", 7.99));

    EXPECT_DOUBLE_EQ(order.getTotalPrice(), 13.98);

    order.clearDishes();
}
