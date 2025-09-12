#include <iostream>
#include <string>
using namespace std;

struct Phone
{
	string brand;
	int price;
};

void printInfo(const Phone& myPhone)
{
	cout << "Brand of your phone : " << myPhone.brand << endl
		 << "Price of your phone$: " << myPhone.price;
}

int main()
{
	Phone userPhone;

	cout << "Please enter the following information about your phone." << endl;
	
	cout << "Brand : " ;
	cin >> userPhone.brand;
	cout << "Price$: ";
	cin >> userPhone.price;
	
	cout << endl;
	printInfo(userPhone);
} 