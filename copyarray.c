// copy the elements of one array into another array
#include<stdio.h>
int main()
{
	int a[20],b[20],i,n;
	 	printf("Enter the size array");
		scanf("%d",&n);
		
		
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		printf("copy in 2nd array");
		for(i=0;i<n;i++)
		{
			b[i]=a[i];
		}
		for(i=0;i<n;i++)
		printf("%d\n",b[i]);
}