// This project asks the user for their name, year of birth, place of birth origin and displays them
// Name Age and Origin
// Mike Cognata (Programmer)
// Last modified 02.21.24

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Setup Section
	system("color E1");
	system("title strings, constant variables, escape sequences, cin functions+methods    by M. Cognata");

	// Variable Declaration section
	const int BASE_YEAR = 2023;
	int birthYear;
	string fullName;
	string city;
	
	// Banner Section
	cout << "\n"
		<< "\t\t   This lab asks user for Full Name, Year of Birth and City \n"
		<< "\t\t           Then displays the information on screen          \n"
		<< "\t\t                        Lab #2                              \n"
		<< "\t\t                    by M. Cognata					        \n\n\n";

	// Input section
	cout << "Please enter your name: ";
	getline(cin, fullName);

	cout << "What year were you born \"" << fullName << "\"? ";
	cin >> birthYear;
	cin.ignore(256,'\n');

	cout << "Enter the city you live in: ";
	getline(cin, city);

	// Output Section
	cout 
		<<"\n" 
		<< "   You are from \"" << city << "\" and as of " << BASE_YEAR 
		<< " you were " << BASE_YEAR - birthYear << " years old. \n" 
		<< endl;

	// Cleanup Section
	system("pause");
	return 0;
}