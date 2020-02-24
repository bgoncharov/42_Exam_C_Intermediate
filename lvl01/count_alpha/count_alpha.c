#include <stdio.h>

static int is_alpha(int c)
{
	return (c >= 'a' && c <= 'z');
}

static char	*lowcase(char *str)
{
	for (int i = 0; str[i]; i += 1)
		str[i] += (str[i] >= 'A' && str[i] <= 'Z') ? 32 : 0;
	return (str);
}

static int  count_alpha(char *s)
{
	int tab[26] = {0};
	char *str = lowcase(s);
	int total = 0;
	int	i = -1;

	while (str[++i])
		tab[str[i] - 'a'] += (is_alpha(str[i]) ? 1 : 0);
	i = -1;
	while (str[++i])
	{
		if (tab[str[i] - 'a'] > 0)
		{
			if (total > 0)
				printf(", ");
			printf("%d%c", tab[str[i] - 'a'], str[i]);
			tab[str[i] - 'a'] = 0;
			total += 1;
		}
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		count_alpha(argv[1]);
	printf("\n");
	return (0);
}
