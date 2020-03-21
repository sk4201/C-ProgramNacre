#include<stdio.h>
struct Emp
{
	int no;
	char name[20];
	float sal;
	
	
};
main()
{
	int x;
	struct Emp e;
	printf("int size : %d\n",sizeof(int));
	printf("int size : %d\n",sizeof(x));
	
	printf("Emp size : %d\n",sizeof(struct Emp));
	printf("Emp size : %d\n",sizeof(e));
}