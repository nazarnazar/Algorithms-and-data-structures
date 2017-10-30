#include "Queue.h"


Queue::Queue()
{
	head = 0;
}

int Queue::Empty() const
{
	return (head == 0);
}

void Queue::Put(int v)
{
	node* tmp = tail;
	tail = new node(v);
	if (head == 0)
		head = tail;
	else
		tmp->next = tail;
}

int Queue::Get()
{
	int v = head->value;
	node* tmp = head;
	head = head->next;
	delete tmp;
	return v;
}