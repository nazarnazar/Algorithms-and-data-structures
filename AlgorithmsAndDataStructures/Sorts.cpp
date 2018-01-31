#include "Sorts.h"

void Sorts::NonadaptiveInsertion(int * a, int size)
{
	for (int i = 1; i < size; i++)
		for (int j = i; j > 0; j--)
			if (a[j] < a[j - 1])
			{
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
}

void Sorts::AdaptiveInsertion(int * a, int size)
{
	for (int i = 1; i < size; i++)
	{
		int tmp = a[i];
		int j = i;
		while (tmp < a[j - 1])
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = tmp;
	}
}

void Sorts::Selection(int * a, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
			if (a[j] < a[min])
				min = j;
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}

void Sorts::AdaptiveBubble(int * a, int size)
{
	for (int i = 0; i < size; i++)
	{
		bool flag = true;
		for (int j = size - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
				flag = false;
			}
		}
		if (flag == true)
			break;
	}
}

void Sorts::Shell(int * a, int size)
{
	int h;
	for (h = 1; h < size / 9; h = 3 * h + 1);
	for (; h > 0; h /= 3)
		for (int i = h; i < size; i++)
		{
			int j = i;
			int v = a[i];
			while (j > h && v < a[j - h])
			{
				a[j] = a[j - h];
				j -= h;
			}
			a[j] = v;
		}
}

int Sorts::Partition(int * a, int l, int r)
{
	int i = l - 1;
	int j = r;
	int v = a[r];
	int temp;

	for (;;)
	{
		while (a[++i] < v);
		while (a[--j] > v) if (j == 0) break;
		if (i >= j) break;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	temp = a[i];
	a[i] = a[r];
	a[r] = temp;
	return i;
}

void Sorts::Quicksort(int * a, int l, int r)
{
	if (r <= l) return;
	int i = Partition(a, l, r);
	Quicksort(a, l, i - 1);
	Quicksort(a, i + 1, r);
}