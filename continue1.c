#include<stdio.h>
int main()
{
	int x;
	for(x=-1;x<=9;x++)
	{
		if(x<3)
		continue;
		else
		printf("%d\n",x);
	}
	return 0;
}