#pragma once

template <typename  T>


class Node
{
private:

	Node* left = nullptr;
	Node* right = nullptr;
	T value;

public:
	Node(){}
	~Node(){}

};

