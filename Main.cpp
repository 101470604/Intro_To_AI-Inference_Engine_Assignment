#pragma once
#include <iostream>
#include <fstream>
#include "BackwardsChaining.h"
#include "ForwardsChaining.h"
#include "TruthTableChecking.h"
using namespace std;

int main(int argc, char* argv[])
{

	//TruthTableChecking* TT = new TruthTableChecking("test_genericKB.txt");
	cout << "Forwards Chaining: " << endl;
	ForwardsChaining* FC = new ForwardsChaining("test_genericKB.txt");
	cout << endl << "Backwards Chaining: " << endl;
	BackwardsChaining* BC = new BackwardsChaining("test_genericKB.txt");

	if (argc != 3)                      // Check for correct no. of params
	{
		cout << "Incorrect no. of parameters passed" << endl;
		return 0;
	}

	cout << argv[1] << endl;

	if (strcmp(argv[1], "FC"))           // Execute selected method
	{
		
	}
	else if (strcmp(argv[1], "BC"))
	{

		
	}
	else if (strcmp(argv[1], "TT"))
	{
		// NOT IMPLEMENTED
	}
	else
	{
		cout << "Invalid method name" << endl;
		return 0;
	}
	
	
		
	return 0;
}