#include<iostream>
#include"SqQueue.h"

using namespace std;

int main()
{
	ArrayQueue q;
	q.enqueue(1);
	q.print();
	q.enqueue(2);
	q.print();
	q.enqueue(3);
	q.print();
	q.enqueue(4);
	q.print();
	q.enqueue(5);
	q.print();
	q.enqueue(9);
	int s = q.size();
	cout << "SIZE: " << s << endl;
	int n = q.getfront();
	cout << "当前队头元素：" << n << endl;
	q.dequeue(); q.dequeue(); q.dequeue(); q.enqueue(10);
	/*q.print();
	q.size();
	s = q.size();
	int n = q.getfront();
	cout << "SIZE: " << s << endl;*/
	SqQueue p;
	p.enqueue(5);
	p.print();
	p.enqueue(4);
	p.print();
	p.enqueue(3);
	p.print();
	p.enqueue(2);
	p.print();
	p.enqueue(1);
	p.print();
	int s1 = p.size();
	cout << "SIZE: " << s1 << endl;
	p.dequeue();
	p.print();
	p.size();
	s1 = p.size();
	int n1 = p.getfront();
	cout << "SIZE: " << s1 << endl;
	cout << "当前队头元素：" <<n1 << endl <<endl;
	p.dequeue(); p.dequeue(); p.enqueue(9); p.print();
	system("pause");
}