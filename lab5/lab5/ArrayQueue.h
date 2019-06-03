#pragma once
#include "Queue.h"

#define MAXSIZE 5
class ArrayQueue : public Queue {
public:
	ArrayQueue() {
		this->rear = 0;
		this->front = 0;
	}
	virtual int size();
	virtual bool isEmpty();
	virtual bool isFull();
	virtual void print();
	//入队操作
	virtual void enqueue(int num);
	//出队操作
	virtual void dequeue();
	//获得队首元素
	virtual int getfront();
private:
	int data[MAXSIZE];
	int rear;
	int front;
};
