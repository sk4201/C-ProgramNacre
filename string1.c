#include<stdio.h>
int main()
{
	char *s[]={"PINK","WHITE","BLUE","GREEN"};
	int i;
	
	for(i=0;i<4;i++)
	{
		//printf("%s\n",s[i]);
		//printf("%c\n",s[i]);
		printf("%c\n",*s[i]);
	}
}