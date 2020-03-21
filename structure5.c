#include<stdio.h>
struct emp
{
	int no;
	char name[20];
	float sal;
	
	
};
struct emp read();
main()
{
	struct emp y;
	y = read();
	printf("No : %d\n",y.no);
	printf("Name : %s\n",y.name);
	printf("Salary :%f\n",y.sal);
	
	return 0;
}
struct emp read()
{
	struct emp e;
	printf("Enter Emp Details\n");
	scanf("%d%s%f" ,&e.no,e.name ,&e.sal);
	
	return e;
 	
}