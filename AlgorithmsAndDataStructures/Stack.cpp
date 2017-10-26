#include "Stack.h"


template <class Item>
Stack<Item>::Stack()
{
	head = 0;
}

template <class Item>
int Stack<Item>::Empty() const
{
	return (head == 0);
}

template <class Item>
void Stack<Item>::Push(Item item)
{
	head = new node(item, head);
}

template <class Item>
Item Stack<Item>::Pop()
{
	node* temp = head;
	Item v = temp->value;
	head = head->next;
	delete temp;
	return v;
}