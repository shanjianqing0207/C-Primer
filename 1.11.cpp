#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0, _max, _min;
	std::cin >> v1 >> v2;
	_max = v1 > v2 ? v1 : v2;
	_min = v1 > v2 ? v2 : v1;
	while ( _max >= _min ) {
		std::cout << _min << std::endl;
		++_min;
	}
	return 0;
}
