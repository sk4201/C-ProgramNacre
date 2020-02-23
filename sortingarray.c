#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp;
 	printf("Enter the size array a-");
	scanf("%d",&n);
	
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("After Sorting New array is \n");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		
		
}