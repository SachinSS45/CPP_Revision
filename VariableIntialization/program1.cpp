#include<iostream>

int main(){

	int x = 10;//Direct Intialization
	int y(20);//Copy Intialization
	
	std::cout << x << std::endl;
	std::cout << y << std::endl;

	int z{30};//Uniform or list or Braces Intialization
	std::cout << z << std::endl;

	
	int a = 10.5f;//10
	int b(20.5f);//20
	//int c{30.5};//Error : Narrowing Conversion of '3.05e+1'from double to int
	

	[[maybe_unused]] int s{10};//C++ 2017 feature Only intialization
	std::cout << s;	
	return 0;
}
