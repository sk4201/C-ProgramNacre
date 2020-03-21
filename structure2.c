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
	struct Emp e ={101,"Shubham",35000};
	printf("No : %d\n",e.no);
	printf("Name : %s\n",e.name);
	printf("Salary :%f\n",e.sal);
}