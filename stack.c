#include<stdio.h>
void push();
void pop();
void peek();
void display();
int is_full();
int is_empty();

int ele;
int	top=-1;

int size,n,stack[20];
int main()
{
   	int ch ; 
	printf("Enter the size of stack");
	scanf("%d\n",&n);
	while(1)
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.display\n");
		printf("5.quit\n");
		
		printf("Enter the choice\n");
		scanf("%d",&ch);
	}
switch(ch)
	{
		case 1:	push();
				break;
		case 2: pop();
				break;
		case 3: peek();
				break;
		case 4:	display();
				break;
		case 5:	exit(1);
		
		default : printf("Invalid choice");
	
	}
	return 0;
}
	void push()
	{
		if(is_full())
		{
			printf("Stack is full\n");
		}
		else
		{
			printf("Enter The element");
			scanf("%d",&ele);
			++top;
			stack[top]=ele;
			
			
		}
	}	
	
	void pop()
	{
		if(is_empty())
		{
			printf("Stack is empty");
		}
		else
		{
		ele=stack[top];
		printf("%d",ele);		
		 top--;
		}
	}
	
		void peek()
	{
		if(is_empty)
		{
			printf("Stack is empty");
		}
		else
		{
		printf("%d",stack[top]);		
		}
	}
	
	
		void display()
	{
		if(is_empty())
		{
			printf("Stack is empty");
		}
		else{
		int j;
		for(j=top;j>=0;j--)
		{
		printf("%d",stack[j]);		
		}	
	}
	
	int is_full()
	
	{
		if (size==top+1)
		{
			return 1;
		}
		else 
		{
			return 0;
		}
	}
	
	int is_empty()
	
	{
		if(top==-1)
		{
			return 1;
		}
		else 
		{
			return 0;
		}
	}
