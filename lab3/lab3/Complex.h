class Complex {
	public:
		Complex(double r = 0.0, double i = 0.0) { //定义构造函数
			real = r;
			image = i;
		}
		~Complex(); //析构函数
		friend Complex operator+(const Complex&, const Complex&); //声明'+'的重载函数为友元函数
		friend Complex operator-(const Complex&, const Complex&); //声明'-'的重载函数为友元函数
		friend Complex operator*(const Complex&, const Complex&); //声明'*'的重载函数为友元函数
		friend Complex operator/(const Complex&, const Complex&); //声明'/'的重载函数为友元函数
		void display(); //打印函数
	private:
		double real;  //实部，double类型
		double image; //虚部，double类型
};
