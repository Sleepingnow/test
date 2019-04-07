#include<iostream>
#include"stack.h"
using namespace std;
Stack::Stack()
{
	top = 0;
	stacksize = 0;
}

bool Stack::isEmpty()
{
	return top == 0;
}

bool Stack::Stack::isFull()
{
	return top == MAX;
}

void Stack::push(char& item)
{
	if (!isFull())
	{
		items[top++] = item;
		stacksize++;
	}
}

char Stack::pop(char& item)
{
	if (!isEmpty())
	{
		item = items[--top];
		stacksize--;
	}
	return item;
}

int Stack::size()
{
	return stacksize;
}
