#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int count,char_reference;
	count = 0;
	char_reference = 48;

	while (count < 10)
	{
		ft_putchar(char_reference + count);
		count += 1;
	}
	ft_putchar('\n');
	
}
