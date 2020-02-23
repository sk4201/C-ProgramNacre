// to count a total number of duplicate elements in an array

#include<stdio.h>
int main()
{
	int a[20],b[20],i,n,j,k,count=0;
	 	printf("Enter the size array a\n");
		scanf("%d",&n);
		printf("Enter the Elements\n");
        for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		k=0;
	
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;)
			{
				if(a[i]==a[j])
				{
		
					
				for(k=j;k<n;k++)
						{
							
							a[k] = a[k+1];
						}
							
					n--;
					j--;
				}
				j++;
			}
			
		}
		
		printf("New Array After Removing Duplicates\n");
 		for(i=0;i<n;i++){
		 	
		 	printf("%d\n",a[i]);
		 }
		             
return 0;
}