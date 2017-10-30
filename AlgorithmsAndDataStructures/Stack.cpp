#include "Stack.h"


Stack::Stack()
{
	head = 0;
}

int Stack::Empty() const
{
	return (head == 0);
}

void Stack::Push(int item)
{
	head = new node(item, head);
}

int Stack::Pop()
{
	node* temp = head;
	int v = temp->value;
	head = head->next;
	delete temp;
	return v;
}