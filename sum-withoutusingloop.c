#include<stdio.h>
int main()
/*{
	int n,sum=0,r1;
	printf("Enter the Number of Three Digit Number");
	scanf("%d",&n);
	
	r1=n%10;
	sum=sum+r1;
	n=n/10;
	
	
	r1=n%10;
	sum=sum+r1;
	n=n/10;
	
	r1=n%10;
	sum=sum+r1;
	
	
	printf("%d\n",sum);
	
}*/
{ 
	

int a,b,c,n,sum;

	printf("Enter the Number of Three Digit Number");
	scanf("%d",&n);
	a=n/100;
	b=((n%100)/10);
	c=n%10;
	sum=a+b+c;
	printf("%d\n",sum);
}