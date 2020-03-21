#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the Value Of N To Print The Row");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(i<=n-1)
		{
			if(j==1 || j==i)
			printf("*");
			else
			printf(" ");
		}
		else
			printf("*");			
		}	
		printf("\n");
	}
return 0;
} 