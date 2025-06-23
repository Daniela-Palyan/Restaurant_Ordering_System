#include "Dish.h"

class Entree : public Dish {
private:
    int calories;
public:
    Entree(std::string dishName, double dishPrice, int cal);
    void display() const;
};
