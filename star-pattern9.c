#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
		  if(i<=4)
			{
				if(j>=i+1&&j<=7-i)
					{
						printf(" ");
					}
				else
					{
						printf("*");
					}
			}
			else
			{
				if(j>=9-i && j<=i-1)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
		    }
		}
		printf("\n");
	}
}
