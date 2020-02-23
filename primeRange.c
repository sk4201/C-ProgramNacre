#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count,n;
	printf("enter the number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				++count;	
			}
		}
			
			if(count==2)
			{
				printf("%d the number is prime-\n",i);
			}
			else
			{
				printf("%d the number is not prime-\n",i);
			}
	}
	
	
	return 0;
}