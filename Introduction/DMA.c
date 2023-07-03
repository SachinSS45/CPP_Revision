#include<stdio.h>
#include<stdlib.h>

void fun(){

	int *ptr = (int*)malloc(sizeof(int));
	*ptr = 50;
	printf("%d\n",*ptr);
	free(ptr);
}

void main(){

	int *ptr = (int*)malloc(sizeof(int));

	*ptr = 10;
	
	printf("%d\n",*ptr);
	free(ptr);
	fun();
}
//10
//50
