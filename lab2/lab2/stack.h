class Stack
{
	private:
		enum { MAX = 100 };   //栈的大小
		char items[MAX];    //保存栈的数据的数组
		int top;    //指向栈顶的索引
		int stacksize; //栈的当前大小
	public:
		Stack();
		~Stack();
		bool isEmpty();//判断栈是否为空
		bool isFull();//判断栈是否已满
		//push() 如果栈未满则压入元素
		void push(char& item);
		//pop() 如果栈不为空则弹出栈顶元素
		char pop(char& item);
		int getTop(char& item);
		int size();
};

