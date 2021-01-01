#include <iostream>
int main()
{
	int i = 42; // 初始化变量
	int *p1 = &i; // 初始化指针p1，使其存入i的地址
	*p1 = *p1 * *p1; // 将指针p1指向的i赋值为i * i
	std::cout << *p1 << std::endl;
	return 0;
}
