#include<iostream>

void fun(){

	std::cout << "In fun";
}

int main(){

	fun(10);
	return 0;
}
//Error : to many arrguments to function "fun"
