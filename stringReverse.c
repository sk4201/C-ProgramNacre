#include<stdio.h>
int main()
{
	char *s[]={"PINK","WHITE","BLUE","GREEN"};
	int t,i,j;
	for(i=0;i<strlen(s);i++)
	{
		j=0;
		k=strlen(s[i])-1;
		while(j<k)
		{
			t=*s+i;
			*s+i=*s+j;
			*s+j=t;
			i++;
			j--;
		}
		*s+i;
			
		for(i=0;i<strlen(s);i++)
		{
				printf("%d\n",*(s+i));	
		}
	}
	return 0;
}
