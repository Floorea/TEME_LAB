#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a,i,PAR=1;
	printf("n:");
	scanf("%d", &n);

	if (n<2)
	{
		printf("operatia ''sau'' are  nevoie de cel putin 2 termeni ! ");
		return 0;
	}

	for (i =0; i < n; i++)
	{
		scanf("%d", &a);
		if ((a & (1 << 0)) == 1)
			PAR = 0;
	}
	if (PAR == 1)
		printf("rezultat par");
	else
		printf("rezultat inpar");
	return 0;
}