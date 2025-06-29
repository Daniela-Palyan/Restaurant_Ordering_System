#ifndef APPETIZER_H
#define APPETIZER_H

class Dish;

class Appetizer : public Dish {
private:
    bool isSpicy;
public:
    Appetizer(std::string dishName, double dishPrice, bool spicy);
    void display() const;
};

#endif
