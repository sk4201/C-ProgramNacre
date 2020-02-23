//WAP to find lARGEST NO. IN ARRAY
#include<stdio.h>
int main()
{
	int i,n,a[20],large,j;
	printf("Enter the size array\n ");
	scanf("%d",&n);
	
	
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		large=0;
		for(i=0;i<n;i++)
		{
			if(large<=a[i])
			{
				large=a[i];
			}
		
		}
		printf("largest no. is %d\n",large);
		return 0;
		
}