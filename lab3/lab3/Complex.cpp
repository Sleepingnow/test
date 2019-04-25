#include <iostream>
#include "Complex.h"
using namespace std;

Complex::~Complex() //析构函数
{

}

Complex operator+(const Complex &c1, const Complex &c2) // '+'的重载 
{
	return Complex(c1.real + c2.real, c1.image + c2.image);
}

Complex operator-(const Complex &c1, const Complex &c2) // '-'的重载 
{
	return Complex(c1.real - c2.real, c1.image - c2.image);
}

Complex operator*(const Complex &c1, const Complex &c2) // '*'的重载 
{
	return Complex(c1.real * c2.real - c1.image * c2.image, c1.real * c2.image + c1.image * c2.real);
}

Complex operator/(const Complex &c1, const Complex &c2) // '/'的重载 
{
	return Complex((c1.real * c2.real + c1.image * c2.image) / (c2.real * c2.real + c2.image * c2.image), (c1.image * c2.real - c1.real * c2.image) / (c2.real * c2.real + c2.image * c2.image));
}

void Complex::display() //打印计算结果
{
	if (real != 0 && image != 0) //实部和虚部都不为0
		if(image >0) //虚部大于0
			cout << real << "+" << image << "i" << endl;
		else //虚部小于0
			cout << real << image << "i" << endl;
	else if (real == 0 && image != 0) //实部为0，虚部不为0
		cout << image << "i" << endl;
	else if (real != 0 && image == 0) //实部不为0，虚部为0
		cout << real << endl;
	else //实部和虚部都为0
		cout << "0" << endl;
}