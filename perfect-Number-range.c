void main()
{
	
	int n , i , j;
	int sum = 0 ; 
	int temp;
	printf("enter n  ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	  {
		temp = i;
		sum = 0 ;
			for(j=1;j<temp;j++)
	{
			
		if(i%j==0)
		{
			sum = sum + j ;
		}
	}
		if(sum == temp)
	printf("%d perfect\n",temp);
	else
	printf("%d :-No Perfect Number\n",temp);	
	

	
	}
}