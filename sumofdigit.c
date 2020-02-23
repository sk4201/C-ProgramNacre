#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,temp,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;	
	}
	n=temp;
	printf("sum of digit of %d is : %\n",n,sum);
}