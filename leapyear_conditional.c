#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	
	(year%4&&year%100!=0)?printf("leap year"):(year%4==0)?printf("leap year"):printf("Not leap year");
	
	return 0;
}