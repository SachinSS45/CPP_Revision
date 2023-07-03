#include<stdio.h>
#include<stdlib.h>
void main(){

	//file pointer variable to store the value returned by fopen()
	FILE *fptr;
	//creating file using fopen() access mode "w"
	fptr = fopen("demo.txt","w");

	if(fptr==NULL){

		printf("The file is not opened . The program will now exit .");
		exit(0);
	}else{
		printf("The file is created sucessfully.");
	}
	
}
