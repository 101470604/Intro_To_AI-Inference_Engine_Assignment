#pragma once
#include "InferenceEngine.h"


class BackwardsChaining : public InferenceEngine
{
private:
	truthValue solve(Argument* arg);
public:
	BackwardsChaining(string path);       // Constructor
	~BackwardsChaining();
	void execute();
};