#include <stdio.h>
#include <stdlib.h>

void SUM(int* sum, int* nr)
{
	*sum = *sum + *nr;
}

int main()
{
	int n,i, nr,sum=0;

	//citire nr elemente
	printf("nr elemente:");
	scanf("%d", &nr);


	//citire elemente
	for (i = 0; i < nr; i++)
	{
		printf("->");
		scanf("%d", &n);
		SUM(&sum, &n);
	}

	//afisare suma
	printf("\nsuma:%d", sum);
}