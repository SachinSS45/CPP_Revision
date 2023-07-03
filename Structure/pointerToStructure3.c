#include<stdio.h>

struct Batsman{

	char name[20];
	int jerNo ;
	float avg ;
}vk = {"Virat",18,48.50};
void main(){

	struct Batsman obj = {"Mahi",7,60.00};
	printf("%ld\n",sizeof(struct Batsman));//32
	
	struct Batsman *vptr = &vk;
	struct Batsman *mptr = &obj;	
	printf("%s\n",vptr->name);//Virat
	printf("%d\n",vptr->jerNo);//18
	printf("%f",vptr->avg);//48.50

	printf("%s\n",mptr->name);//Mahi
	printf("%d\n",(*mptr).jerNo);//7
	printf("%f",mptr.avg);//60.00


}
