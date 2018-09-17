// Lab1.cpp
// Matt McMenamin


//Some of this code is borrowed from a previous assignment in computer science 1.
//worked with brandon, james, and jon

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;
#include <algorithm>
#include<vector>
#include<string>
#include<fstream>

string userinput;
double one = 0, two = 0, three = 0, four = 0, temp;
int count = 0;


int main() {
	cout << "Please enter the name of a file. \n"
		"We'll return the number of doubles, the first 2 doubles, and the last two doubles." << endl;
	cin >> userinput;
	ifstream inFile;

	inFile.open(userinput);

	if (inFile.is_open())
		cout << "opened" << endl;

	inFile >> one;
	
	inFile >> two;
	
	inFile >> three;
	

	inFile >> temp;



	while (!inFile.fail())
	{
		four = three;
		three = temp;
		
		inFile >> temp;
	}

	cout << "\n first number is " << one << "\n second number is " << two << "\n second to last number is " << four << "\n last number is " << three << endl;


	system("pause");
	return 0;

}




