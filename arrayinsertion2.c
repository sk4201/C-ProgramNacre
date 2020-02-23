#include<stdio.h>
int main()
{
	int a[20],pos,n,i,ele;
	printf("Enter the size array a");
	scanf("%d",&n);
	
		printf("Enter the Elements\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
			printf("Enter the New element which you want to enter in new array");
			scanf("%d",&ele);
			printf("Enter the position where  New element which you want to enter in new array");
			scanf("%d",&pos);
			
			for(i=n-1;i>=pos;i--)
			{
				a[i+1]=a[i];
				
			}
			a[pos]=ele;
			
			printf("After insertine new array is\n");
			{
				for(i=0;i<=n;i++)
				printf("%d\n",a[i]);
				
			}
			return 0;
		
}