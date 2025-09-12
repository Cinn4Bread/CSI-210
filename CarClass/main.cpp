#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Car
{

public:
	Car() //defaults
	{
		year = 0;
		make = "not set!";
		speed = 0;
	}

	Car(int aYear, string aMake) //constructor accepting year and make as arguments
	{
		year = aYear;
		make = aMake;
		speed = 0;
	}

	~Car() //destructor
	{
		fout.close();
	}

	void accelerate()
	{
		speed += 5;
	}

	void brake()
	{
		if (speed != 0) //check if brake will decrease speed under 0
		{
			speed -= 5;
		}
	}

	int getYear()
	{
		return year;
	}

	string getMake()
	{
		return make;
	}

	int getSpeed()
	{
		return speed;
	}

private:
	int year;
	int speed;
	string make;
	ofstream fout;
};

int main()
{
	Car convertible(2011, "Toyota Corolla");

	cout << "I'm in my " << convertible.getYear() << " " << convertible.getMake() << "." << endl << endl;

	cout << "I'm accelerating..." << endl << endl;

	for (int i = 0; i != 5; i++)
	{
		convertible.accelerate();
		cout << "Current speed: " << convertible.getSpeed() << " mph." << endl;
	}

	cout << endl << "Now I'm braking..." << endl << endl;

	for (int i = 0; i != 6; i++)
	{
		convertible.brake();
		cout << "Current speed: " << convertible.getSpeed() << " mph." << endl;
	}
}