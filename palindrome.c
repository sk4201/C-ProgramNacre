#include<stdio.h>
#include<conio.h>
int palindrome(int);
int main()
{
	int n,result;
	printf("Enter the number");
	scanf("%d",&n);
	result=palindrome(n);
	if(result==1)
	{
		printf("palindrome number");
	}
	else
	{
		printf("Not palindrome number");	
	}
	return 0;
}
int palindrome(int n)
{
	int r,sum=0,temp;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
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