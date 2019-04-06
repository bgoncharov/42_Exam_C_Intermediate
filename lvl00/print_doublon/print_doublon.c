#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (na > i && nb > j)
	{
		if (a[i] == b[j])
		{
			if (count > 0)
				printf(" ");
			printf("%i", a[i]);
			i++;
			j++;
			count++;
		}
		else if (a[i] < b[j])
			i++;
		else
			j++;
	}
	printf("\n");
}

int     main(void) // DELETE
{
    int a[] = { -5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000 };
    int b[] = { 2,  4,  5,  6,  7, 10,  40,  70 };
    int na = 11;
    int nb = 8;
    print_doublon(a, na, b, nb);
    return (0);
}
