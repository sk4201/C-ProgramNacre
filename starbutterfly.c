 #include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i<=4)
			{
				if((j>=1 && j<=i) || (j>=8-i && j<=7))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				if((j>=1 && j<=8-i) || (j>=i && j<=7))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
	    }
	    printf("\n");
	}
}
