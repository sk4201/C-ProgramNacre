#include<stdio.h>
struct Emp
{
	int no;
	char name[20];
	float sal;
	
	
};
main()
{
	int n,i;
	printf("Enter the number of employee:-");
	scanf("%d",&n);
	struct Emp e[n];
	
	printf("Enter Emp Details\n1.id no.\n2.name\n3.sal\n");
	for(i=0;i<n;i++)
	{
		printf("Enter employee %d details\n",i+1);
		scanf("%d%s%f" ,&e[i].no,e[i].name ,&e[i].sal);
		/*printf("No : %d\n",e[i].no);
		printf("Name : %s\n",e[i].name);
		printf("Salary :%f\n",e[i].sal);*/

	}
	
	for(i=0;i<n;i++)
	{
	printf("No : %d\n",e[i].no);
	printf("Name : %s\n",e[i].name);
	printf("Salary :%f\n",e[i].sal);
	}
}