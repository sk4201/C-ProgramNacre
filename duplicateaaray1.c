// to count a total number of duplicate elements in an array

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
			b[i]=a[i];
			
		}
		printf("duplicate array\n");
		for(i=0;i<n;i++)
		{
	      printf("%d\n",b[i]);
		}
		
		for(i=0;i<n;i++)
			{
				count=0;
					if(a[i]==b[j])
						{
							count++;
						}
             }
             printf("%d duplicate",count);
             
return 0;
}