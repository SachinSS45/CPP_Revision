#include<iostream>

int main(){

	int x = 10;
	int &y = x;//(Reference Variable

	std::cout << x << std::endl;//10
	std::cout << y << std::endl;//10
	
	std::cout << &x << " " << &y << std::endl;//100 100

	int z = 30;
//	int &p;//Error : p declared as reference but not intialized
	
	int *ptr = NULL;

	
	return 0;
}
