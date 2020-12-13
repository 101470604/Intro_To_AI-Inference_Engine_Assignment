#pragma once
#include "argument.h"
#include "enums.h"
#include <string>
 
using namespace std;
// Each variable exists as an independant node whose value
// is updated as expressions are created & evaluated
// Replaces a simple boolean as an unknown state is required

class expression
{
public:
	expression(Argument* arg);
	~expression();
	truthValue getValue();
	string getName();
	bool setParent(expression* parentNode);
	void setAsNegated();
	bool isOperator();
	bool antecedantIsOperator();
	bool consequentIsOperator();
	Argument* getArg();
	
	Argument * arg; // Each argument exists independant of any one expression
	expression * left, *right, *parent;

private:
	bool negated;
	truthValue value;


};