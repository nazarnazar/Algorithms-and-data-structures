#include <iostream>
#include "Stack.h"
#include "Stack.cpp"


using namespace std;


int main()
{
	Stack<int> stack;
	stack.Push(5);
	stack.Push(6);
	stack.Push(7);

	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;

	return 0;
}