// 1.11编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数

#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0, _max, _min;
	std::cin >> v1 >> v2;
	_max = v1 > v2 ? v1 : v2;
	_min = v1 > v2 ? v2 : v1;
	for (; _min <= _max; ++_min) {
		std::cout << _min << std::endl;
	}
	return 0;
}
	
