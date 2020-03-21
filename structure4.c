#include<stdio.h>
struct Emp
{
	int no;
	char name[20];
	float sal;
	
	
};
void display(struct Emp);
main()
{
	int x;
	struct Emp e;
	
	printf("Enter Emp Details");
	scanf("%d%s%f" ,&e.no,e.name ,&e.sal);
	display(e);
}
void display(struct Emp y)
{
	printf("No : %d\n",y.no);
	printf("Name : %s\n",y.name);
	printf("Salary :%f\n",y.sal);
}