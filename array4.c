//WAP  to arrange all even number to the left side
#include<stdio.h>
int main()
{
	int i,j,n,a[20],t;
	printf("Enter the size array\n ");
	scanf("%d",&n);
	
	
		printf("Enter the Elements\n");
	
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		i=0;
		j=n-1;
 
		while(i<j)
		{
			while(1)
			{
				if(a[i]%2!=0)
				
			break;
				else
					i++;
				
				
			}
			
			while(1)
			{
					if(a[j]%2==0)
				break;
					else
					
						j--;
					
			}
			
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
			j--;
			
		}
		
		printf("New Array After sorting");
		
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
		
		
		return 0;
		
}