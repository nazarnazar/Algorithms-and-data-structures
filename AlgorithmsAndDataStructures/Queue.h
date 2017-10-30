#pragma once


class Queue
{
private:
	struct node
	{
		int value;
		node *next;

		node(int v)
		{
			value = v;
			next = 0;
		}
	};
	node *head, *tail;

public:
	Queue();
	int Empty() const;
	void Put(int);
	int Get();
};


/*Queue queue;
	queue.Put(5);
	queue.Put(6);
	queue.Put(7);

	cout << queue.Get() << endl;
	cout << queue.Get() << endl;*/