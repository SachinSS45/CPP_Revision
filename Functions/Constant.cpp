#include<iostream>


int main(){

	/*-------------Program1------------------
	int y;
	std::cout << "Enter Value : ";
	std::cin >> y;

	const int x = y;//No Error

	std::cout << x << std::endl;//10
	*/
	//------------Program2-------------------
	int y = 20;
	int x = 10;
	const int *ptr = &x ;//data const  OR int const *ptr = &x
	//*ptr = 30;//Error
	ptr = &y;//No Error
	std::cout << *ptr << std::endl;

	int *const ptr2 = &x;//Constant pointer


	return 0;
}
