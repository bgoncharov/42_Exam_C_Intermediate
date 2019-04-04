void is_2(int i, int *count)
{
	if (i >= 10)
	{
		is_2(i / 10, count);
		is_2(i % 10, count);
	}
	if (i == 2)
		*count += 1;
}

int    count_of_2(int n)
{
	int count = 0;
	int i = 1;

	while (++i <= n)
		is_2(i, &count);
	return (count);
}
