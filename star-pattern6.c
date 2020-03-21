#include<stdio.h>
int main()
{
	int i,j,temp;
	temp=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=7-i&& j<=5+i&&temp==1)
			{
					printf("*");
					temp=0;
			}
		
			else
			{
				printf(" ");
				temp=1;
			}
		
		}
		
		printf("\n");
	}
}