 //Write a program to print the reverse of the given array?s
#include<stdio.h>
int main()
{
	int i,j,n,a[20],t;
	printf("Enter the size array\n ");
	scanf("%d",&n);
	
	
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		i=0;
		j=n-1;
		while(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
			j--;
		}
		
		printf("Array after swapping\n");
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
