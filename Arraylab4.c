//Write a program to find the missing number in integer array of 1 to 100?
#include<stdio.h>
int main()
{
	int a[] = {1,2,5,3,6};
	int n,i,total;
 	
 	n = sizeof(a) / sizeof(a[0]);
		
		
		
		total =  ( n+1 ) * ( n + 2) / 2;
		
		for(i=0;i<n;i++)
		{
			
			total = total - a[i];
		} 
		
		printf("misiing values = %d ",total);		
}