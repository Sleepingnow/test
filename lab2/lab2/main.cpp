#include<iostream>
#include"stack.h"
using namespace std;

int compare(int op) { //比较优先级
	int priority = 0;
	if (op == 43 || op == 45)
		priority = 1;
	if (op == 42 || op == 47)
		priority = 2;
	return priority;
}

int main()
{
	Stack* s = new Stack();
	int num[100]; //存放ASCII码
	char str[100]; //存放ASCII码对应的字符
	int i = 0, j;
	cout << "以ASCII码形式输入(依次输入ASCII码，以空格隔开，要结束时输入‘0’)";
	while (1)
	{
		cin >> num[i]; //依次输入ASCII码，以空格隔开，要结束时输入‘0’
		if (num[i] == 0)
			break;
		i++;
	}
	cout << "该ASCII码串可译为:" << endl;
	for (j = 0; j < i; j++)
	{
		str[j] = (char)num[j];
		cout << str[j];
	}
	cout << endl;
	char e,topStr;
	for (j = 0; j < i; j++)
	{
		if (num[j] >= 48 && num[j] <= 59) //遇到操作数，直接将其输出
		{
			cout << str[j];
		}
		if (num[j] == 42 || num[j] == 43 || num[j] == 45 || num[j] == 47) // 遇到运算符'+','-','*','/'
		{
			if (s->isEmpty() || s->getTop(topStr) == 40) //如果栈为空或栈顶元素为左括号，则直接压栈
				s->push(str[j]);	
			else if (compare(num[j]) > compare(s->getTop(topStr))) //如果操作符的优先级大于栈顶元素的优先级，则直接压栈
				s->push(str[j]);
			else //当优先级小于栈顶元素优先级时
			{
				do {
					s->pop(e);
					int num1 = (int)e;
					if(num1 != 40)
						cout << e;
				} while ((compare(num[j]) <= compare(s->getTop(topStr))) && !s->isEmpty());
				s->push(str[j]);
			}
		}
		if (num[j] == 40)
		{
			s->push(str[j]);
		}
		if (num[j] == 41)//遇到右括号
		{
			int num3;
			do {
				s->pop(e);
				num3 = (int)e;
				if (num3 == 40|| s->isEmpty())
					break;
				cout << e;
			} while (num3 != 40);
		}
	}
	while (!s->isEmpty())
	{
		s->pop(e);
		int num2 = (int)e;
		if(num2 != 40)
			cout << e;
	}
	cout << endl;
	delete s; //析构函数执行
	system("pause");
	return 0;
}
