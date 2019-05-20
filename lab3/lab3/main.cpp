#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
	double real[2], image[2];
	char add[2];
	char op, openParen, closeParen, ch_i;
	int i;
	cout << "输入计算内容（格式为(a+bi)*(c+di)即2个虚数应加括号)" << endl;
	for (i = 0; i < 2; i++) //输入计算内容（格式为(a+bi)*(c+di)即2个虚数应加括号)
	{
		cin >> openParen;
		cin >> real[i];
		cin >> add[i];
		cin >> image[i];
		cin >> ch_i;
		cin >> closeParen;
		if (i == 0)
			cin >> op;
	}
	for (i = 0; i < 2; i++) //判断虚部的符号
	{
		if (add[i] == '+')
			continue;
		else
			image[i] = -image[i];
	}
	Complex *c1 = new Complex(real[0], image[0]); //动态建立对象
	Complex *c2 = new Complex(real[1], image[1]);
	Complex *c3 = new Complex();
	switch (op) //根据运算符进行选择相应运算
	{
	case '+':
		*c3 = *c1 + *c2;
		break;
	case '-':
		*c3 = *c1 - *c2;
		break;
	case '*':
		*c3 = *c1 * *c2;
		break;
	case '/':
		*c3 = *c1 / *c2;
		break;
	}
	cout << "result = "; c3->display(); //输出计算结果
	delete c1, c2, c3; //销毁对象
	system("pause");
	return 0;
}