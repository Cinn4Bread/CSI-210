#include <iostream>
using namespace std;

class Topping
{
public:
	Topping();
	Topping(string aName, double anExtraCost);
	string getName();
	double getExtraCost();
	void setName(string aName);
	void setExtraCost(double anExtraCost);

private:
	string name;
	double extraCost;
};

class Pizza
{
public:
	Pizza(char aSize);

	char getSize() const;
	void setSize(char aSize);
	void addTopping(const Topping& aTopping);
	double getPrice();
	void printPizzaInfo();

private:
	static const int MAX_TOPPINGS = 5;
	char size;
	Topping toppings[MAX_TOPPINGS];
	int toppingCount;
	int index = 0;

	double basePrice() const;
	double toppingsCost();
};
