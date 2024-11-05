#include <iostream>
using namespace std;

int main() {
	// Int numbers.
	int x, y, z, sum;
	x = 5;
	y = 7;
	z = 9;
	sum = x + y + z;
	//cout << "The sum of x, y and z is " << sum << endl;
	
	// Floading numbers (With decimals)
	double price1, price2, price3;
	price1 = 10.4;
	price2 = 11.798;
	price3 = 9.1;

	//cout << "You have to pay: " << endl;
	//cout << price1 << " For apple, " << price2 << " For banana, " << price3 << " For mango." << endl;
	

	// char variable
	char grade = 'A';
	//cout << "He has got " << grade << endl;
	

	// boolian varibales ( true or false )
	bool isInStock = true;
	bool forSale = false;

	//cout << "Are those in stock: " << isInStock << endl;
	//cout << "Are those for sale: " << forSale << endl;
	

	// strings
	string name, day, food;
	name = "Js Bro";
	day = "Friday";
	food = "Kacchi Biriany";

	cout << "I am " << name << endl;
	cout << "I am free this " << day << endl;
	cout << "I love the " << food << endl;
	

	return 0;
}
