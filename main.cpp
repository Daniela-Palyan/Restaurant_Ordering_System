#include <iostream>
#include <string>
#include "Restaurant.h"
#include "Appetizer.h"
#include "Entree.h"
#include "Dessert.h"

int main() {
    Restaurant restaurant;

    // Add dishes directly to menu
    restaurant.getMenu().addDish(new Appetizer("Spring Rolls", 4.99, true));
    restaurant.getMenu().addDish(new Appetizer("Bruschetta", 5.99, false));
    restaurant.getMenu().addDish(new Entree("Grilled Salmon", 14.99, 600));
    restaurant.getMenu().addDish(new Entree("Spaghetti Bolognese", 12.49, 750));
    restaurant.getMenu().addDish(new Dessert("Cheesecake", 6.99, false));
    restaurant.getMenu().addDish(new Dessert("Brownie", 5.49, true));

    int choice;
    std::string customerName;

    do {
        std::cout << "\n=== Restaurant Ordering System ===\n";
        std::cout << "1. Show Menu\n";
        std::cout << "2. Place New Order\n";
        std::cout << "3. View Order History\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            restaurant.showMenu();
        }
        else if (choice == 2) {
            std::cout << "Enter your name: ";
            std::getline(std::cin, customerName);
            restaurant.placeNewOrder(customerName);
        }
        else if (choice == 3) {
            std::cout << "Enter your name: ";
            std::getline(std::cin, customerName);
            restaurant.viewCustomerOrderHistory(customerName);
        }

    } while (choice != 0);

    return 0;
}
