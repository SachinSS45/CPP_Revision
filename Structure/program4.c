//Intializing structure Dyanamically
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Lang{

	char langName[20];
	char founder[20];
};

void main(){

	struct Lang *ptr = (struct Lang*)malloc(sizeof(struct Lang));

	//ptr->langName = "C";Error : Assignment to Expression with Array type
	strcpy(ptr->langName,"C");
	strcpy(ptr->founder,"Denis Ritchie");

	printf("%s\n",ptr->langName);//C
	printf("%s\n",ptr->founder);//Denis Ritchie

	free(ptr);
}
