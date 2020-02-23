
#include<stdio.h>
int main()
{
	int i,a[20],found=0,ele,n;
	printf("Enter the size array\n ");
	scanf("%d",&n);
	
	
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("Enter the Elements to search\n");
		scanf("%d",&ele);
		
		for(i=0;i<n;i++)
		{
			if(ele==a[i])
			{
				
			printf("Found @ loc : %d",i);
				found=1;
			}
		}
		
		if(!found)
		{
			printf("Not found");
		}
		
}