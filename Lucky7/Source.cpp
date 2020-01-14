//Lauren Roe
//This is my own work

#include <iostream>

using namespace std;

int main()
{
	// Write a program that reads in 5 integers and prints the largest and the smallest of the group.
	int a, b, c, d, e;
	cout << "Enter 5 integers: " << endl;
	cin >> a >> b >> c >> d >> e;
	//cout << "The numbers are " <<a <<" "<<b<<" "<<c<<" "<<d<<" "<<e<< endl;
	int largest = a;
	if (b > largest) largest = b;
	if (c > largest) largest = c;
	if (d > largest) largest = d;
	if (e > largest) largest = e;
	cout << largest << endl;
	int smallest = a;

	return 0;
}