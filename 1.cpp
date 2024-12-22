#include <iostream>

int main () { 
	for (int i = 1; i < 11; i+=2)
	{
		for (int j = 0; j < (11 - i) / 2; j++) std::cout << " ";
		std::cout << std::endl;
		for (int j = 0; j < i; j++) std::cout << "#";
		std::cout << std::endl;
		for (int j = 0; j < (11 - i) / 2; j++) std::cout << " ";
		std::cout << std::endl;
	}
	return 0;
}
