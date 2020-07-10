/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:10:17 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/10 16:10:21 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
