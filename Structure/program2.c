#include<stdio.h>

struct Batsman{

	char name[20];
	int jerNo ;
	float avg ;
}vk = {"Virat",18,48.50};
void main(){

	struct Batsman obj = {"Mahi",7,60.00};
	printf("%ld\n",sizeof(struct Batsman));//32
	
	printf("%s\n",vk.name);//Virat
	printf("%d\n",vk.jerNo);//18
	printf("%f",vk.avg);//48.50

	printf("%s\n",obj.name);//Mahi
	printf("%d\n",obj.jerNo);//7
	printf("%f",obj.avg);//60.00


}
