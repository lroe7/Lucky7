//Lauren Roe
//This is my own work

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// 1. Write a program that reads in 5 integers and prints the largest and the smallest of the group.

	//takes 5 integers from user input
	int a, b, c, d, e;
	cout << "Enter 5 integers: " << endl;
	cin >> a >> b >> c >> d >> e;
	cout << "The numbers are " <<a <<" "<<b<<" "<<c<<" "<<d<<" "<<e<< endl;
	//compares all of the integers to find the largest 
	int largest = a;
	if (b > largest) largest = b;
	if (c > largest) largest = c;
	if (d > largest) largest = d;
	if (e > largest) largest = e;
	cout << "The largest number is " << largest << endl;
	//compares all of the integers to find the smallest 
	int smallest = a;
	if (b < smallest) smallest = b;
	if (c < smallest) smallest = c;
	if (d < smallest) smallest = d;
	if (e < smallest) smallest = e;
	cout << "The smallest number is " << smallest << endl;




	//2. Write a program that calculates and prints the sum of the first 50 positive integers that are multiples of 7.

	//loops through 50 times and adds all multiples of 7 together 
	int sum = 0; 
	for (int i = 1; i <= 50; i++)
	{
		sum += i * 7;
	}
	cout << "The sum of the first 50 positive integers that are multiples of 7 is " << sum << endl;




	//3. Write a program that calculates and prints the first 10 terms of the factorial sequence

	//factorial n is all integers from 1-n multiplied together, so !5 = 1*2*3*4*5
	//this loops over integers 1-10 and creates prints out the factorial for each integer
	int factorial = 1;
	for (int i = 1; i <= 10; i++)
	{
		factorial *= i;
		cout << i << "! = " << factorial << endl;
	}




	//4. Write a program that reads in a string and determines whether it is a palindrome

	//takes a string from user input
	cout << "Please enter a string: " << endl;
	string str;
	cin >> str;
	int count = 0;
	//loops through the string and checks if the word is spelled the same backwards and forwards
	//if it is not, the loop breaks
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
	//if it loops through the whole word without breaking, it is a palindrome
	if (count == str.size())
	{
		cout << str << " is a palindrome." << endl;
	}
	



	//5. Write a program that reads in a positive integer and determines whether it is a prime number.

	//takes a number from user input
	cout << "Please enter a number: " << endl;
	int num;
	cin >> num;
	bool isPrime = true;
	//loops through all numbers before it until 2 and see if when the number is divided by the each other numer, there is a remainder
	//if there is no remainder, it is not prime and breaks the loop
	for(int i = num-1; i >= 2; i--)
	{
		if (num % i == 0)
		{
			isPrime = false;
			cout << num << " is not a prime number" << endl;
			break;
		}
	}
	//if it loops through without breaking, the number is prime
	if (isPrime == true)
	{
		cout << num << " is a prime number" << endl;
	}
	



	//6. Write a program that creates an array of integers using an initialization list and calculates and displays the average of the values.

	//creates an array of 5 integers with user input
	double avgSum = 0.0;
	int counter = 0;
	int l, m, n, o, p;
	cout << "Please enter 5 integers: " << endl;
	cin >> l >> m >> n >> o >> p;
	//adds the integers to the array
	int arr[] = { l, m, n, o, p };
	//loops through the array and adds all of the integers together
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		avgSum += arr[i];
		counter++;
	}
	//divdes the sum by the size of the array to get the average as a double
	double average = avgSum / counter;
	cout <<"The average of ["<<l<<", "<<m<<", "<<n<<", "<<o<<", "<<p<<"] is "<<average<<endl;
	



	//7. Write a program that gets a positive integer n from the user and creates an array of n. 
	//The program should read strings from a file, fill the array with the first n strings, and print the string with the most characters. 
	//You may assume that number of strings in the file is greater than n. 

	//takes an integer from user input
	int f;
	string* wordList;
	cout << "Please enter an integer for the size of the array: " << endl;
	cin >> f;
	
	//creates an array of strings that contains the number of elements the user entered in
	wordList = new string[f];

	//create an object to read from file
	ifstream fin("input.in");

	//make sure fin is initialized to the file
	if (!fin)
	{
		cerr << "file not found" << endl;
		exit(1);
	}
	int i = 0; 
	//adds words from the file into the array
	while (i < f)
	{
		fin >> wordList[i];
		i++;
	}
	for (int j = 0; j < f; j++)
	{
		cout << wordList[j] << " ";
	}
	//loops through the array to find the longest word
	cout << '\n';
	string longest = wordList[0];
	for (int k = 1; k < f; k++)
	{
		if (wordList[k].size() > longest.size())
		{
			longest = wordList[k];
		}
	}
	cout << "The largest word is " << longest << endl;

	delete[] wordList;

	return 0;
}