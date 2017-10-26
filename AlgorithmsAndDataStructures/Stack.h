#pragma once


template <class Item>
class Stack
{
private:
	struct node
	{
		Item value;
		node* next;

		node(Item v, node* n)
		{
			value = v;
			next = n;
		}
	};
	node *head;

public:
	Stack();
	int Empty() const;
	void Push(Item);
	Item Pop();
};
