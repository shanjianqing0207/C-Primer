#include <iostream>
int main()
{
	int val = 10, ival = 100;
	// p被初始化，存有val的地址
	int *p = &val;
	std::cout << "*p:" << *p << std::endl;
	// 改变指针p指向的val的值
	*p = 0;
	std::cout << "*p:" << *p << std::endl;
	// 改变指针p的值，现在存有ival的地址
	p = &ival;
	std::cout << "*p:" << *p << std::endl;
	return 0;
}
