#pragma once

class NameBSTNode
{
private:

	NameBSTNode*	left;
	NameBSTNode*	right;
	

public:
	NameBSTNode() {}
	~NameBSTNode() {}

	NameBSTNode*	getLeft()			{ return left; }
	NameBSTNode*	getRight()			{ return right; }

	void setLeft(NameBSTNode* left)						{ this->left = left; }
	void setRight(NameBSTNode* right)					{ this->right = right; }
};