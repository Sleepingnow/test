#include<iostream>
#include"stack.h"
using namespace std;

int main()
{
	Stack s;
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
		s.push(str[j]);
	}
	cout << endl;
	int size, mark = 1;//设置标记
	size = s.size();
	char e;
	for (i = 0; i < size / 2; i++)
	{
		s.pop(e);
		if (e != str[i])
			mark = 0;
	}
	if (mark == 0)
		printf("不是回文字符串\n");
	else
		printf("是回文字符串\n");
	system("pause");
	return 0;
}
