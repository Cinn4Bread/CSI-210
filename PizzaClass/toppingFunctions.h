#include "pizza.h"
using namespace std;

Topping::Topping()
{
    name = " ";
    extraCost = 0.0;
}

Topping::Topping(string aName, double anExtraCost)
{
    name = aName;
    extraCost = anExtraCost;
}

string Topping::getName()
{
    return name;
}

double Topping::getExtraCost()
{
    return extraCost;
}

void Topping::setName(string aName)
{
    name = aName;
}

void Topping::setExtraCost(double anExtraCost)
{
    extraCost = anExtraCost;
}
