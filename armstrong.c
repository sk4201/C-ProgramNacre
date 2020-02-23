#include<stdio.h>
#include<conio.h>
int armstrong(int);
int main()
{
	int n,result;
	printf("Enter the number");
	scanf("%d",&n);
	result=armstrong(n);
	if(result==1)
	{
		printf("Armstong number");
	}
	else
	{
		printf("Not Armstong number");	
	}
	return 0;
}
int armstrong(int n)
{
	int i,r,sum=0,temp;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}