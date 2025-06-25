#include <gtest/gtest.h>
#include "Customer.h"

TEST(CustomerTest, ConstructorAndGetters) {
    Customer c("Alice", 101);
    EXPECT_EQ(c.getName(), "Alice");
    EXPECT_EQ(c.getId(), 101);
}

TEST(CustomerTest, SetName) {
    Customer c("Bob", 202);
    c.setName("Robert");
    EXPECT_EQ(c.getName(), "Robert");
}
