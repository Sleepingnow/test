#pragma once
class Queue {
public:
	Queue() {
	}
	virtual int size() = 0;
	virtual bool isEmpty() = 0;
	virtual void print() = 0;
	//入队操作
	virtual void enqueue(int num) = 0;
	//出队操作
	virtual void dequeue() = 0;
	//获得队首元素
	virtual int getfront() = 0;

};

