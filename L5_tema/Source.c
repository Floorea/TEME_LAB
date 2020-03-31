#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 100
int stack[MAX_SIZE];
int stack2[MAX_SIZE];
int top = -1; int top2 = -1;



void push(int x)
	{
		if (top == MAX_SIZE - 1)
		{
			//Overflow case. 
			printf("Error: stack overflow\n");
			return;
		}
		stack[++top] = x;
	}

void push2(int x)
{
	if (top2 == MAX_SIZE - 1)
	{
		//Overflow case. 
		printf("Error: stack overflow\n");
		return;
	}
	stack2[++top2] = x;
}

int prim(int numar)
{
	if (numar < 2) 
		return 0;
	if (numar == 2) 
		return 1;
	
	for (int i = 2; i <= numar / 2; i++) 
		if (numar % i == 0) 
			return 0;
	return 1;
}


void eliminare(int j)
{
	for ( j; j < top; j++)
		stack[j] = stack[j + 1];
	top--;
}


int bits(int a) 
{
	
	int i,new=0;
//	if (a == 0)return 0;
	//if (a == 1)return 1;
	for(i=sizeof(a) * 8 - 1;i>=0;i--)
	{
		if (((a >> i)&1) != 0)
			new = new + pow(10, i);
	}
	return new;


}




int main()
{
	int i,j,a;

	for (i = 0; i <= 50; i++)
		push(i);

	for (i = 0; i < top; i++)
	{	
		if (prim(stack[i]) == 1)
		{
			push2(bits(stack[i]));
			eliminare(i);
			i--;
			
		}
	}

	for (i = 0; i <= top; i++)
	{
		if(i<=top2)
			printf("%d		%d\n", stack[i], stack2[i]);
		else
			printf("%d\n", stack[i]);

	}
	

}
