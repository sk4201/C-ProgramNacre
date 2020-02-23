#include<stdio.h>
#include<conio.h>
int strong_number(int);
int main()
{
	int n,sum=0,temp,r;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+strong_number(r);
		n=n/10;
		
	}
	n=temp;
	if(n==sum)
	{
		printf("strong number");
	}
	else
	{
		
			printf("not strong number");
	}
return 0;
}
int strong_number(int r)
{
	int i,fact=1;
	for(i=1;i<=r;i++)	
	{
		fact=fact*i;
		
	}
	return fact;
	
}