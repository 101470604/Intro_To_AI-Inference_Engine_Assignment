#pragma once
#include <string>
#include "enums.h"
#include <regex>
using namespace std;


class Argument
{
public:
	Argument(string pName, truthValue pValue);
	~Argument();

	string name;
	truthValue value;
	bool isOperator();
	bool isNegated();
private:
	regex rgxOperatorChars = regex("^[<>=&|]+$");
	bool negated;
};

