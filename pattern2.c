#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		for(y=x;y>=1;y--)
		{
			printf("%d",y);
			
		}
		printf("\n");
	
	}
	
	getch();
}