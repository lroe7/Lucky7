//Lauren Roe
//This is my own work

#include <iostream>
#include <fstream>
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

	//2. Write a program that calculates and prints the sum of the first 50 positive integers that are multiples of 7.
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
	/*cout << "Please enter a string: " << endl;
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
	}*/
	
	//5. Write a program that reads in a positive integer and determines whether it is a prime number.
	/*cout << "Please enter a number: " << endl;
	int num;
	cin >> num;
	bool isPrime = true;
	for(int i = num-1; i >= 2; i--)
	{
		if (num % i == 0)
		{
			isPrime = false;
			cout << num << " is not a prime number" << endl;
			break;
		}
	}
	if (isPrime == true)
	{
		cout << num << " is a prime number" << endl;
	}*/
	
	//6. Write a program that creates an array of integers using an initialization list and calculates and displays the average of the values.
	/*double sum = 0.0;
	int count = 0;
	int a, b, c, d, e;
	cout << "Please enter 5 integers: " << endl;
	cin >> a >> b >> c >> d >> e;
	int arr[] = { a, b, c, d, e };
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		sum += arr[i];
		count++;
	}
	double average = sum / count;
	cout <<"The average of ["<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<"] is "<<average<<endl;*/
	
	//7. Write a program that gets a positive integer n from the user and creates an array of n. 
	//The program should read strings from a file, fill the array with the first n strings, and print the string with the most characters. 
	//You may assume that number of strings in the file is greater than n. 
	int n;
	string* wordList;
	cout << "Please enter an integer for the size of the array: " << endl;
	cin >> n;
	
	wordList = new string[n];

	//create an object to read from file
	ifstream fin("input.in");

	//make sure fin is initialized to the file
	if (!fin)
	{
		cerr << "file not found" << endl;
		exit(1);
	}
	int i = 0; 
	while (i < n)
	{
		fin >> wordList[i];
		i++;
	}
	for (int j = 0; j < n; j++)
	{
		cout << wordList[j] << " ";
	}
	cout << '\n';
	string largest = wordList[0];
	for (int k = 1; k < n; k++)
	{
		if (wordList[k].size() > largest.size())
		{
			largest = wordList[k];
		}
	}
	cout << "The largest word is " << largest << endl;

	delete[] wordList;

	return 0;
}