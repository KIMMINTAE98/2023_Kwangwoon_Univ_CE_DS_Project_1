#pragma once
#include "MemberQueue.h"
#include "TermsList.h"
#include "TermsBST.h"
#include "NameBST.h"
#include <fstream>
using namespace std;

class Manager
{
private:

	ifstream	fcmd;
	ofstream	flog;


public:
	Manager();
	~Manager();

	void run(const char* command);
	
	void PrintSuccess(const char* cmd);
	void PrintErrorCode(int num);

	// LOAD
	// ADD
	// QPOP
	// SEARCH
	// PRINT
	// DELETE
};
