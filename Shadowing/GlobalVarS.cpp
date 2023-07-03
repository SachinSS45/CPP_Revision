#include<iostream>

int x = 100;//-------------->Global Variable Shadowing
int main(){
	
	int x = 10;
	std::cout << x << std::endl;

	{
		int x = 20;
		std::cout << x << std::endl;//20
		std::cout << ::x << std::endl;//100

		x = 30;
		std::cout << x << std::endl;//30
	}
	std::cout << ::x << std::endl;//100
	std::cout << x << std::endl;//10
	return 0;
}
