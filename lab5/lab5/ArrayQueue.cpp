#include<iostream>
#include "ArrayQueue.h"
using namespace std;

int ArrayQueue::size()
{
	return (rear - front);
}

void ArrayQueue::print()
{
	cout << "当前队列：";
	for (int i = 0; front + i < rear; i++) {
		cout << data[front + i] << " ";
	}
	cout << endl;
}

int ArrayQueue::getfront()
{
	return data[front];
}

bool ArrayQueue::isEmpty()
{
	if (this->rear == this->front)
	{
		cout << "当前队列为空,不能删除数据" << endl;
		return true;
	}
	else
		return false;
}

bool ArrayQueue::isFull()
{
	if (rear == MAXSIZE)
	{
		cout << "当前队列已满,不能添加数据" << endl;
		return true;
	}
	else
		return false;
}

void ArrayQueue::enqueue(int data) {
	if (!isFull())
	{
		this->data[this->rear] = data;
		this->rear = (this->rear + 1);
	}
}

void ArrayQueue::dequeue()
{
	if (!isEmpty()) {
		this->front = (this->front + 1);
	}
}
