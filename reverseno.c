#include<stdio.h>
#include<conio.h>
int reverse(int);
int main()
{
	int n,result;
	printf("Enter the number");
	scanf("%d",&n);
	result=reverse(n);
  		printf("Reverse= %d",result);
	return 0;
}
int reverse(int n)
{
	int r,reverse=0;
	while(n>0)
	{
		r=n%10;
		reverse=(reverse*10)+r;
		n=n/10;
	}
	return reverse;
}