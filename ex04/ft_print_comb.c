void ft_putchar(char c);

void ft_print_comb(void)
{
	int char_reference, count_1, count_2, count_3;
	char_reference = 48;
	count_1 = 0;
	count_2 = 0;
	count_3 = 0;

	while (count_3 < 8)
	{
		while (count_2 < 9)
		{
			while (count_1 < 10)
			{
				if (count_3 < count_2 && count_2 < count_1)
				{
					ft_putchar(char_reference + count_3);
					ft_putchar(char_reference + count_2);
					ft_putchar(char_reference + count_1);
					ft_putchar(',');
					ft_putchar(' ');
				}
				count_1 += 1;
			}
			count_1 = 0;
			count_2 += 1;
		}
		count_2 = 0;
		count_3 += 1;
	}
}
