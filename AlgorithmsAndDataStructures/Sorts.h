#pragma once


class Sorts
{
public:
	void NonadaptiveInsertion(int * a, int size);
	void AdaptiveInsertion(int * a, int size);
	void Selection(int * a, int size);
	void AdaptiveBubble(int * a, int size);
	void Shell(int * a, int size);
	void Quicksort(int * a, int l, int r);
	int Partition(int * a, int l, int r);
};