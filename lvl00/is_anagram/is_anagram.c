#include <stdio.h> // DELETE

int	is_anagram(char *a, char *b)
{
	int i;
	char ar[126] = {0};

	i = 0;
	while (a[i] && b[i])
	{
		ar[(int)a[i]]++;
		ar[(int)b[i]]--;
		i++;
	}
	i = 0;
	while (i < 126)
	{
		if (ar[i])
			return (0);
		i++;
	}
	return (1);
}

int	main(void) // DELETE
{
	printf("%d\n", is_anagram("abcdef", "fabcde"));
	printf("%d\n", is_anagram(".123?.", "?321.."));
	printf("%d\n", is_anagram("abca", "bcab"));
	return (0);
}
