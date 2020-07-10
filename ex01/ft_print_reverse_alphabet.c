void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int count,char_reference;
	count = 0;
	char_reference = 122;

	while (count < 26)
	{
		ft_putchar(char_reference - count);
		count += 1;
	}
	ft_putchar('\n');
	
}
