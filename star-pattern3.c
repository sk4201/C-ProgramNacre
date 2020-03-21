#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i>=5-j&&i<=3+j)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}