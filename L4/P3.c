//schimbarea a doua valori folosind un aux de tip pointer

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* a, *b, *aux;
	a = (int*)malloc(sizeof(int));
	b = (int*)malloc(sizeof(int));

	printf("a="); scanf("%d", a);
	printf("b="); scanf("%d", b);
	aux = a;
	a = b;
	b = aux;
	printf("a=%d\n", *a);
	printf("b=%d\n", *b);

	system("pause");
	return 0;


}