#include <iostream>
#include "Restaurant.h"

int main() {
    Restaurant restaurant;

    // Step 1: Add Customers
    Customer customer1("Alice", 1);
    Customer customer2("Bob", 2);
    restaurant.addCustomer(customer1);
    restaurant.addCustomer(customer2);

    // Step 2: Show menu
    std::cout << "\n--- Restaurant Menu ---\n";
    restaurant.showMenu(); // displays all available dishes

    // Step 3: Create dishes (simulate user picking from menu)
    // Note: You might normally search menu by name or index
    Appetizer* salad = new Appetizer("Caesar Salad", 4.99);
    Entree* burger = new Entree("Cheeseburger", 9.49);
    Dessert* cake = new Dessert("Chocolate Cake", 5.25);

    // Step 4: Place orders
    Order order1(customer1.getId());
    order1.addDish(salad);
    order1.addDish(cake);
    restaurant.addOrder(order1);

    Order order2(customer2.getId());
    order2.addDish(burger);
    restaurant.addOrder(order2);

    // Step 5: View order history
    std::cout << "\n--- Alice's Order History ---\n";
    restaurant.printCustomerOrderHistory(customer1.getId());

    std::cout << "\n--- Bob's Order History ---\n";
    restaurant.printCustomerOrderHistory(customer2.getId());

    std::cout << "\nThanks for using the Restaurant Ordering System!\n";
    return 0;
}

