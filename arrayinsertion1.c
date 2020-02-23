#include<stdio.h>
int main()
{
	int a[20],b[20],pos,m,n,i;
 	printf("Enter the size array a-");
	scanf("%d",&m);
	
		printf("Enter the Elements\n");
	
		for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the size  array b-");
	scanf("%d",&n);
	
	printf("Enter the Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	
	printf("Enter the position for inserting the array");
	scanf("%d",&pos);

	for(i=m-1;i>=pos;i--)
	{ 
		a[i+n]=a[i];
	}
	
	for(i=0;i<n;i++)
	{
		a[pos+i]=b[i];
	}
	
		printf("the element after inserting into array\n");
		
			for(i=0;i <(m+n);i++)
			{
				printf("%d\n",a[i]);
			}
			return 0;
		
			
}
	
   	