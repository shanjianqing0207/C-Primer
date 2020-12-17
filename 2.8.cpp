#include <iostream>
int main()
{
	// std::cout << "\62\115\10" << std::endl;
	// 使用转义序列，先输出2，再输出制表符、M、换行符
	std::cout << "\62\11\115\10" <<std::endl;
	return 0;
}
