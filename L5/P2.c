#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int a)
{
	if (top == MAX_SIZE - 1)
		printf("Error: stack overflow\n");
	else
		stack[++top] = a;
}

void print() 
{
	if (top == -1)
		printf("Error: no elements in stack\n");
	else
		for (int i = 0; i <= top; i++)
			printf("%d ", stack[i]);
	printf("\n");

}

int main()
{
	int C, N, i,nr;
	
	line:printf("C= "); 
	
	if (scanf("%d", &C) > 0); // put "scanf" in "if" to escape from warnings
	if (C > 7 || C < 0)
	{
		printf("Error: wrong 'C' value \n");
		goto line; // this is silly
	}
	printf("N= "); if(scanf("%d", &N)>0);

	for (i = 0; i < N; i++)
	{
		if(scanf("%d", &nr)>0);
		if ((nr & (1 << C)) == (1 << C))
			push(nr);
	}

	print();

	return 0;

}