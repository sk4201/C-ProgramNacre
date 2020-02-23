//Write a program to read and print the one-dimensional array?

#include<stdio.h>
int main()
{
	int a[20],n,i;
 	printf("Enter the size array a-");
	scanf("%d",&n);
	
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		
		printf("Your Array is:-");
		for(i=0;i<n;i++)
		printf("%d",a[i]);
				
		
}