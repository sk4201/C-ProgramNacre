// to count a total number of duplicate elements in an array

#include<stdio.h>
int main()
{
	int a[20],i,n,j,count=0;
	 	printf("Enter the size array a");
		scanf("%d",&n);
		printf("Enter the Elements\n");
        for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
			{	
				for(j=i+1;j<n;j++)
				{
					if(a[i]==a[j])
						{
							count++;
							break;
						}	
				}
             }
             printf("%d duplicate",count);
             
return 0;
}