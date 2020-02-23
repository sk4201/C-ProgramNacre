/*Write a program to find the sum of the given array.
	{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
The sum is 55*/ 
	
	#include<stdio.h>
	
	int main()
	{
		int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i,sum=0;
		for(i=0;i<10;i++)
		{
			sum=sum+a[i];
		}
		printf("Total sum=%d",sum);
	}
