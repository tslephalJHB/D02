/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:06:43 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/10 13:22:18 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_comb(void)
{
	int char_reference, count_1, count_2, count_3, count_4;
	char_reference = 48;
	count_1 = 0;
	count_2 = 0;
	count_3 = 0;
	count_4 = 0;

	while (count_2 < 10)
	{
		while (count_1 < 10)
		{
			while (count_3 < 10)
			{
				while (count_4 < 10)
				{
					if (count_1 != count_4)
					{
						if (count_1 < count_4 && count_2 <= count_3)
						{
							ft_putchar(char_reference + count_2);
							ft_putchar(char_reference + count_1);

							ft_putchar(' ');

							ft_putchar(char_reference + count_3);
							ft_putchar(char_reference + count_4);

							ft_putchar(',');
							ft_putchar(' ');
						}
					}
					count_4 += 1;
				}
				count_4 = 0;
				count_3 += 1;
			}
			count_3 = 0;
			count_1 += 1;
		}
		count_1 = 0;
		count_2 += 1;
	}
}
