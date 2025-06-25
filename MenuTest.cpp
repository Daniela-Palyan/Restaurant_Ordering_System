#include <gtest/gtest.h>
#include "Menu.h"
#include "Appetizer.h"

TEST(MenuTest, AddAndGetDishes) {
    Menu menu;
    Appetizer* dish = new Appetizer("Spring Rolls", 4.50);
    menu.addDish(dish);

    EXPECT_EQ(menu.getDishCount(), 1);
    EXPECT_EQ(menu.getDish(0)->getName(), "Spring Rolls");

    menu.clearDishes();  // Clean up dynamically allocated memory
}

TEST(MenuTest, FindDishByName) {
    Menu menu;
    menu.addDish(new Appetizer("Spring Rolls", 4.50));
    menu.addDish(new Appetizer("Garlic Bread", 3.99));

    Dish* found = menu.findDishByName("Garlic Bread");
    ASSERT_NE(found, nullptr);
    EXPECT_EQ(found->getPrice(), 3.99);

    Dish* notFound = menu.findDishByName("Pizza");
    EXPECT_EQ(notFound, nullptr);

    menu.clearDishes();
}
