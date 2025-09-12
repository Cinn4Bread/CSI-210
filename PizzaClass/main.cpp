#include "pizza.h"
using namespace std;

int main()
{
    // Toppings
    Topping cheese("Cheese", 1.00);
    Topping mushroom("Mushroom", 1.20);
    Topping bellPepper("Bell Pepper", 1.50);

    // Medium pizza with two toppings
    Pizza pm('M');
    pm.addTopping(cheese);
    pm.addTopping(bellPepper);

    // Large pizza with three toppings
    Pizza pl('L');
    pl.addTopping(mushroom);
    pl.addTopping(cheese);
    pl.addTopping(bellPepper);

    // Print info
    pm.printPizzaInfo();
    pl.printPizzaInfo();

    return 0;
}