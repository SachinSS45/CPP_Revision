#include<stdio.h>

void fun(int arr[],int size){

	for(int i=0;i<size;i++){

		arr[i] = arr[i] + 10;
	}
}

void main(){

	int arr[] = {10,20,30,40,50};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	fun(arr,size);//call by address

	printf("After change in original array : ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
