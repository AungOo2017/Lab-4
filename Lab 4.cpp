// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//my forth program in C++


#include <iostream>
using namespace std;

void printMenu() 
{
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
// Implement Factorial
void factorial()
{
	int num;
	unsigned long long factorial = 1;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> num;
	// If the number is negative, it doesn't work and have to type a positive number to proceed
	if (num < 0)
	{
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> num;
	}
	// If the number is positive, the result comes out immediately
	if (num >= 0)
	{
		cout << num << "!" << " = ";

		for (int n = 1; n <= num; ++n)
		{
			factorial *= n;
			cout << n;
			if (n < num)
			{
				cout << " * ";
			}
		}
		cout << " = " << factorial << endl;
	}
}
// Implement Arithmetic Series
void arithmetic()
{
	int first, diff, terms, value, sum = 0;
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> first;
	cout << "";
	cout << "Enter a number to add each time: ";
	cin >> diff;
	cout << "";
	cout << "Enter the number of elements in the series: ";
	cin >> terms;

	value = first;

	for (int i = 0; i < terms; i++)
	{
		cout << value;
		sum += value;
		value = value + diff;

		if (i != terms - 1)
			cout << " + ";
		else
			cout << " = " << sum << endl;
	}
}
// Implement Geometric Series
void geometric()
{
	int a, r, n, value;
	double sum = 0;
	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> a;
	cout << "";
	cout << "Enter a number to multiply by each time: ";
	cin >> r;
	cout << "";
	cout << "Enter the number of elements in the series: ";
	cin >> n;

	value = a;

	for (int i = 0; i < n; i++)
	{
		cout << value;
		sum += a * pow(r, i);
		value = value * r;

		if (i != n - 1)
			cout << " + ";
		else
			cout << " = " << sum << endl;
	}
}

int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}

		cout << "Go Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
