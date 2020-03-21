#include<stdio.h>
void strrev1(char *[] , int);
int main()
{
	char *s[]={"PINK","WHITE","BLUE","GREEN"};
	int t,i,j;
	int n = sizeof(s)/sizeof(s[0]);
	strrev1(&s , n);
	for(i=0;i<n;i++){
	printf("%s ",s[i]);
	}
	return 0;
}
	void strrev1(char *s[] , int n){
		
		int temp ; 
		int i = 0;
		int j = n-1;
		for(i=0;i<n;i++){
			while(i<j)
				{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
				i++;
				j--;		
				}
				
	}
	}