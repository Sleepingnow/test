#include<iostream>
#include "SqQueue.h"
using namespace std;

int SqQueue::size()
{
	return (rear - front + MAXSIZE) % MAXSIZE;
}

void SqQueue::print()
{
	cout << "当前队列：";
	for (int i = 0; i< size(); i++) {
		cout << data[front + i] << " ";
	}
	cout << endl;
}

int SqQueue::getfront()
{
	return data[front];
}

bool SqQueue::isEmpty()
{
	if (this->rear == this->front)
	{
		cout << "当前队列为空,不能删除数据" << endl;
		return true;
	}
	else
		return false;
}

bool SqQueue::isFull()
{
	if ((this->rear + 1) % MAXSIZE == this->front)
	{
		cout << "当前队列已满,不能添加数据" << endl;
		return true;
	}
	else
		return false;
}

void SqQueue::enqueue(int data) {
	if (!isFull())
	{
		this->data[this->rear] = data;
		this->rear = (this->rear + 1) % MAXSIZE;
	}
}

void SqQueue::dequeue()
{
	if (!isEmpty()) {
		this->front = (this->front + 1) % MAXSIZE;
	}
}
