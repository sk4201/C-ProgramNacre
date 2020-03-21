#include<stdio.h>
int main()
{
	int n,r,count=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		

	
	r=n%10;
	n=n/10;
	
	if(r==0)
	{
		count++;
	}
	}
	
	printf("%d\n",count);
	
	return 0;
}