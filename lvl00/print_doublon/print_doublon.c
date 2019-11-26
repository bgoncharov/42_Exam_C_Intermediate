#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int x;
	int y;
	int value;

	value = 0;
	x = 0;
	y = 0;
	while (x < na && y < nb)
	{
		if (a[x] == b[y])
		{
			if (value == 0)
				printf("%d", a[x]);
			else
				printf(" %d", a[x]);
			x++;
			value++;
		}
		else if (a[x] < b[y])
			x++;
		else if (a[x] > b[y])
			y++;
	}
	printf("\n");
}

int main() //DELETE
{
	int a[] = {-5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000};
	int na = 11;
	int b[] = {2,  4,  5,  6,  7, 10,  40,  70};
	int nb = 8;

	print_doublon(a, na, b, nb);
	return (0);
}
