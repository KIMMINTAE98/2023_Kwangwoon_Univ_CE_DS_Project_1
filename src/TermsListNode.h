#pragma once

class TermsListNode
{
private:

	TermsListNode*	next;


public:
	TermsListNode() {}
	~TermsListNode() {}

	TermsListNode*	getNext()		 { return next; }

	void setNext(TermsListNode* next)	 { this->next = next; }
};