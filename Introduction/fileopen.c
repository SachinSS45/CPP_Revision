#include<stdio.h>
#include<stdlib.h>
void main(){

	//file pointer variable to store the value returned by fopen()
	FILE *fptr;
	
	fptr = fopen("demo.txt","r");

	if(fptr==NULL){

		printf("The file is not opened . The program will now exit .");
		exit(0);
	}
	
}
//The file is not opened 
