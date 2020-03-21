#include<stdio.h>
int main()
{
	int i,j,k;
	k=0;
	for(i=1;i<=7;i++)
	{
		if(i<=4)
		k++;
		else
		k--;
	for(j=1;j<=k;j++)
	{
		printf("*");
	}
		printf("\n");
	}

}