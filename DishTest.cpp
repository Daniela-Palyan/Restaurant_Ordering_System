#include <gtest/gtest.h>
#include "Dish.h"
#include "Appetizer.h"
#include "Entree.h"
#include "Dessert.h"

TEST(DishTest, DishProperties) {
    Appetizer a("Bruschetta", 5.99);
    EXPECT_EQ(a.getName(), "Bruschetta");
    EXPECT_DOUBLE_EQ(a.getPrice(), 5.99);

    Entree e("Steak", 15.99);
    EXPECT_EQ(e.getName(), "Steak");
    EXPECT_DOUBLE_EQ(e.getPrice(), 15.99);

    Dessert d("Tiramisu", 6.49);
    EXPECT_EQ(d.getName(), "Tiramisu");
    EXPECT_DOUBLE_EQ(d.getPrice(), 6.49);
}
