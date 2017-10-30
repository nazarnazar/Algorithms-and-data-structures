#pragma once


class Stack
{
private:
	struct node
	{
		int value;
		node* next;

		node(int v, node* n)
		{
			value = v;
			next = n;
		}
	};
	node *head;

public:
	Stack();
	int Empty() const;
	void Push(int);
	int Pop();
};

