#include "TruthTableChecking.h"



TruthTableChecking::TruthTableChecking(string path) : InferenceEngine(path)
{
	execute();
}


TruthTableChecking::~TruthTableChecking()
{
}

void TruthTableChecking::execute()
{
	vector<Argument*> permutations;
	permutations.resize(allArgs.size()); 
	int i = 0;
	for (auto iter = allArgs.begin(); iter != allArgs.end(); iter++)
	{
		if (!(*iter)->isOperator())
		{
			(*iter)->value = FALSE;
			permutations[i] = (*iter);
			i++;
		}
	}
	createPermutation(&permutations, permutations.size() -1, permutations.size()-1);
}

void TruthTableChecking::createPermutation(vector<Argument*>* args, int size, int n)
{
	if (size == 1)
	{
		cout << (*args)[n]->value << " ";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		createPermutation(args, size - 1, n);

		if (size % 2 == 1)
		{
			if ((*args)[size - 1]->value == TRUE)
			{
				(*args)[size - 1]->value = FALSE;
			}
			else
			{
				(*args)[size - 1]->value = TRUE;
			}
		}
	}
}

bool TruthTableChecking::solve(Argument * arg)
{
	return false;
}
