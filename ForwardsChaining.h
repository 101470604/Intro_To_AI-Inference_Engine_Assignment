#pragma once
#include "InferenceEngine.h"
class ForwardsChaining :
	public InferenceEngine
{
private:
	truthValue solve(Argument* arg);
public:
	ForwardsChaining(string path);
	~ForwardsChaining();
	void execute();
};

