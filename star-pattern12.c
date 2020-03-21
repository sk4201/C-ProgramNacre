#include<stdio.h>
int main()
{
	int i,j,k;
	k=1;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i<=6)
			{
				if(j>=6-i&&j<=4+i)
				printf("*");
				else
				printf(" ");
			}
			else
			{
				if(j>=i-5&&j<=15-i)
				printf("*");
				else
				printf(" ");
			}

		}
		printf("\n"); 
	}
}