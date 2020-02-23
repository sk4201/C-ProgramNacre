#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sq,rev1=0,r1,r2,rev2=0;
	printf("enter the number: \n");
	scanf("%d",&n);
	sq=n*n;
	while(n>0)
	{
			r1=n%10;
			rev1=rev1*10+r1;
			n=n/10;
		
	}
	rev1=rev1*rev1;
	while(sq>0)
	{
			r2=sq%10;
			rev2=rev2*10+r2;
			sq=sq/10;
		
	}
	sq=rev2;
	if(sq==rev1)
	{
		printf("Adam number\n");
	}
	else
	{
		printf("Not adam number");
	}

}