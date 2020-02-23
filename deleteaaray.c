// WAP to to delete the number

#include<stdio.h>
int main()
{
	int i,a[20],found=0,ele,n,j;
	printf("Enter the size array\n ");
	scanf("%d",&n);
	
	
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("Enter the Elements to delete\n");
		scanf("%d",&ele);
		
		found=0;
		for(i=0;i<n;i++)
		{
			if(ele==a[i])
			{
				
			    printf("Found @ loc : %d\n",i);
				found=1;
				for(j=i;j<n;j++)
				{
					a[j]=a[j+1];
				}
				n--;
			
				printf("New Array\n");
				for(i=0;i<n;i++)
					{
						printf("%d\n",a[i]); 
					}								
		   }
		}
		
		if(!found)
		{
			printf("Not found");
		}
		
}