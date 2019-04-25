#include<iostream>
#include"stack.h"
using namespace std;
Stack::Stack()//类外定义的构造函数
{
	top = 0;
	stacksize = 0;
}

Stack::~Stack() //析构函数
{
	cout << "析构函数执行" << endl;
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
		return item;
	}
	return -1;
}

int Stack::size()
{
	return stacksize;
}

int Stack::getTop(char& item) //得到栈顶的元素，int类型（即ASCII码）
{
	int ltop = top - 1;
    item = items[ltop];
	int nums = (int)item;
	return nums;
}
