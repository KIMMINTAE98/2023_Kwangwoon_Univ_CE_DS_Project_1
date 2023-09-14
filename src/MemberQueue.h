#pragma once
#include "MemberQueueNode.h"

class MemberQueue
{
private:


public:
	MemberQueue();
	~MemberQueue();

	bool empty();
	bool full();
	void push();
	MemberQueueNode pop();
	MemberQueueNode front();
};

