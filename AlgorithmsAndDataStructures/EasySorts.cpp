#include "EasySorts.h"

void EasySorts::NonadaptiveInsertion(int * a, int size)
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

void EasySorts::AdaptiveInsertion(int * a, int size)
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

void EasySorts::Selection(int * a, int size)
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

void EasySorts::AdaptiveBubble(int * a, int size)
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