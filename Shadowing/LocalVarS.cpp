#include<iostream>


int main(){

	int x = 10;

	std::cout << x << std::endl;//10

	{
		int x = 20;
		std::cout << x << std::endl;//20
//		std::cout << ::x << std::endl; //Error : "::x" has not been declared(becz of local variable shadowing)
	}
	std::cout << x << std::endl;//10
	return 0;
}
