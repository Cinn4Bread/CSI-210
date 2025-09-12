#include "pizza.h"
using namespace std;

Pizza::Pizza(char aSize) 
{
    toppingCount = 0;

    if (aSize == 'S' || aSize == 'M' || aSize == 'L')
    {
        size = aSize;
    }
    else
    {
        cout << "Invalid size!";
    }
}

char Pizza::getSize() const
{
    return size;
};

double Pizza::getPrice()
{
    double total = 0;
    double costs = basePrice() + toppingsCost();
    total += costs;
    return total;
};

void Pizza::setSize(char aSize) //valid sizes: 'S', 'M', 'L'
{
    if (aSize == 'S' || aSize == 'M' || aSize == 'L')
    {
        size = aSize;
    }
    else
    {
        cout << "Invalid size!";
    }
};

void Pizza::addTopping(const Topping& aTopping)
{
    if (index >= MAX_TOPPINGS)
    {
        cout << "Topping limit reached!" << endl;
        return;
    }

    toppings[index] = aTopping;
    index++;
};

double Pizza::basePrice() const
{
    const double SMALL_COST = 8.0;
    const double MEDIUM_COST = 10.0;
    const double LARGE_COST = 12.0;

    if (getSize() == 'S')
    {
        return SMALL_COST;
    }
    else if (getSize() == 'M')
    {
        return MEDIUM_COST;
    }
    else if (getSize() == 'L')
    {
        return LARGE_COST;
    }
};

double Pizza::toppingsCost()
{
    double total = 0;
    for (int i = 0; i < index; i++)
    {
        total += toppings[i].getExtraCost();
    }

    return total;
};

void Pizza::printPizzaInfo()
{
    string sizeString;

    if (getSize() == 'S')
    {
        sizeString = "Small";
    }
    else if (getSize() == 'M')
    {
        sizeString = "Medium";
    }
    else if (getSize() == 'L')
    {
        sizeString = "Large";
    }

    cout << sizeString << " pizza (";

    for (int i = 0; i < index; i++)
    {
        cout << toppings[i].getName();

        if (i != index - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << ") ";
        }
    }

    cout << "... $" << getPrice() << endl;
};