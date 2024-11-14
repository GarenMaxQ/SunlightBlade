// practice 14-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string name;
	char pack;
	int age;
	float fee, fee2, change, change2, young, adult, senior, inc, cot, cotf, cotfa;

	inc = 1;
	cot = 20;
	cotf = 30;
	cotfa = 40;
	young = 50;
	adult = 100;
	senior = 80;

	cout << "Enter name: ";
	cin >> name;

	cout << "Enter age: ";
	cin >> age;

	if (age < 21)
	{
		cout << "The client is young, please pay $" << young << endl;
		cout << "Please enter payment: ";
		cin >> fee;
		change = fee - young;
		cout << "Your change is: " << change;
	}

	else if (age <= 59)
	{
		cout << "The client is an adult, please pay $" << adult << endl;
		cout << "Please enter payment: ";
		cin >> fee;
		change = fee - adult;
		cout << "Your change is: " << change;
	}

	else
	{
		cout << "The client is a senior, please pay $" << senior << endl;
		cout << "Please enter payment: ";
		cin >> fee;
		change = fee - senior;
		cout << "Your change is: " << change;
	}

	if (change < 0)
	{
		cout << endl << "Payment is insufficient";
		exit(0);
	}
	else
	{
		cout << endl << "1. No Inclusions" << endl;
		cout << "2. Cottage" << endl;
		cout << "3. Cottage and Food" << endl;
		cout << "4. Cottage, Food, Alcohol" << endl;
		cout << "Select a package: ";
		cin >> pack;
	}

	switch (pack)
	{
	case '1':
		cout << "Please pay $" << inc;
		cout << endl << "Please enter payment: ";
		cin >> fee2;
		change2 = fee2 - inc;
		cout << "Your change is: " << change2;
		break;
	case '2':
		cout << "Please pay $" << cot;
		cout << endl << "Please enter payment: ";
		cin >> fee2;
		change2 = fee2 - cot;
		cout << "Your change is: " << change2;
		break;
	case '3':
		cout << "Please pay $" << cotf;
		cout << endl << "Please enter payment: ";
		cin >> fee2;
		change2 = fee2 - cotf;
		cout << "Your change is: " << change2;
		break;
	case '4':
		cout << "Please pay $" << cotfa;
		cout << endl << "Please enter payment: ";
		cin >> fee2;
		change2 = fee2 - cotfa;
		cout << "Your change is: " << change2;
		break;

	default:
		cout << "You have entered an invalid number";
		break;
		if (change2 < 0)
		{
			cout << endl << "Payment is insufficient";
			exit(0);
		}

	}
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
