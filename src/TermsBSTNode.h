#pragma once

class TermsBSTNode
{
private:

	TermsBSTNode*	left;
	TermsBSTNode*	right;


public:
	TermsBSTNode() {}
	~TermsBSTNode() {}

	TermsBSTNode*	getLeft()			{ return left; }
	TermsBSTNode*	getRight()			{ return right; }

	void setLeft (TermsBSTNode* left)	{ this->left = left; }
	void setRight(TermsBSTNode* right)	{ this->right = right; }
};