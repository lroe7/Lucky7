//Lauren Roe
//This is my own work

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 1. Write a program that reads in 5 integers and prints the largest and the smallest of the group.
	/*int a, b, c, d, e;
	cout << "Enter 5 integers: " << endl;
	cin >> a >> b >> c >> d >> e;
	cout << "The numbers are " <<a <<" "<<b<<" "<<c<<" "<<d<<" "<<e<< endl;
	int largest = a;
	if (b > largest) largest = b;
	if (c > largest) largest = c;
	if (d > largest) largest = d;
	if (e > largest) largest = e;
	cout << "The largest number is " << largest << endl;
	
	int smallest = a;
	if (b < smallest) smallest = b;
	if (c < smallest) smallest = c;
	if (d < smallest) smallest = d;
	if (e < smallest) smallest = e;
	cout << "The smallest number is " << smallest << endl;*/

	//2. Write a program that calculates and prints the sum of the first 
	//50 positive integers that are multiples of 7.
	/*int sum = 0; 
	for (int i = 1; i <= 50; i++)
	{
		sum += i * 7;
	}
	cout << "The sum of tge first 50 positive integers that are multiples of 7 is " << sum << endl;*/

	//3. Write a program that calculates and prints the first 10 terms of the factorial sequence
	/*int factorial = 1;
	for (int i = 1; i <= 10; i++)
	{
		factorial *= i;
		cout << i << "! = " << factorial << endl;
	}*/

	//4. Write a program that reads in a string and determines whether it is a palindrome
	cout << "Please enter a string: " << endl;
	string str;
	cin >> str;
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != str[str.size() - 1 - i])
		{
			cout << str << " is not a palindrome." << endl;
			break;
		}
		else
		{
			count++;
		}
	}
	if (count == str.size())
	{
		cout << str << " is a palindrome." << endl;
	}
	return 0;
}