#include <stdio.h>

int main()
{
	int i, j, n;
	printf("enter the no of rows you want: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}