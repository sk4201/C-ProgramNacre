#include<stdio.h>
#include<conio.h>
int main()
{
	int lowerlimit,upperlimit,limit,i;
	printf("Enter the Lower limit:-");
	scanf("%d",&lowerlimit);
	printf("Enter the Upper limit:-");
	scanf("%d",&upperlimit);
	
	for(limit=lowerlimit;limit<=upperlimit;limit++)
	{	
		printf("Table-%d\n",limit);
		for(i=1;i<=10;i++)
		{
			printf("%d X %d=%d\n",limit,i,limit*i);
		}
			
	}
		printf("\n");
	
}
	