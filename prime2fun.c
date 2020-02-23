#include<stdio.h>
#include<conio.h>
int prime(int);
int count=0;
int main()
{
	int n,result;
	printf("Enter the number");
	scanf("%d",&n);
	result=prime(n);
	if(result==1)//
	{
		printf("Entered the number is prime");
	}
	else
	{
		printf("Entered the number is not prime");
	}
		

	return 0;
	
}
int prime(int n)
{
int i;

	for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		++count;	
	}
}	
	if(count==2)
	{
		return 1;
	}	
	else
	{
		return 0;
		
	}
}