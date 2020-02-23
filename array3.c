// print all unique elements in an array
#include<stdio.h>
int main()
{
	int a[20],b[20],i,n,j,count=0;
	 	printf("Enter the size array a");
		scanf("%d",&n);
		printf("Enter the Elements\n");
        for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
			{
				count=0;
				for(j=i+1;j<n;j++)
				{
					if(a[i]!=a[j])
						{	
							printf("%d",a[i]);
						}
				}
				
             }
             
             
return 0;
}