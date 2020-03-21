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
	
	printf("Enter Emp Details");
	scanf("%d%s%f" ,&e.no,e.name ,&e.sal);
	printf("No : %d\n",e.no);
	printf("Name : %s\n",e.name);
	printf("Salary :%f\n",e.sal);
}