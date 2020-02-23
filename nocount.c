#include<stdio.h>
#include<conio.h>
int count_digit(int);
int main()
{
	int n,result;
	printf("Enter the number");
	scanf("%d",&n);
	result=count_digit(n);
	printf("%d",result);
}
int count_digit(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
		
	}
	return count;
}