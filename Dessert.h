#ifndef DESSERT_H    
#define DESSERT_H

class Dish;

class Dessert : public Dish {
private:
    bool containsNuts;
public:
    Dessert(std::string dishName, double dishPrice, bool nuts);
    void display() const;
};

#endif
