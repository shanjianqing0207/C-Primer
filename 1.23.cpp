#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item now, item1;
	if (std::cin >> now) {
		int val = 1;
		while (std::cin >> item1) {
			if (now.isbn() == item1.isbn()) {
				++val;
			}	
			else {	
				std::cout << now.isbn() << "有" << val 
					  << "次销售记录"
					  << std::endl;
				now = item1;
				val = 1;
			}
		}
		std::cout << now.isbn() << "有" << val 
			  << "次销售记录"
			  << std::endl;
	}
	else {
		std::cerr << "无输入？" << std::endl;
		return -1;
	}
	return 0;
}


