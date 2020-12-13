#pragma once
#include "InferenceEngine.h"
#include <vector>
class TruthTableChecking :public InferenceEngine
{
private:
	int viableRows;
public:
	TruthTableChecking(string path);
	~TruthTableChecking();
	void execute();
	void createPermutation(vector<Argument*>* args, int size, int n);
	bool solve(Argument* arg);
};

