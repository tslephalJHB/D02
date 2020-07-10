/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:11:37 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/10 16:11:47 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_is_negative(int integer)
{
	if (integer >= 0)
	{
		ft_putchar(80);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(78);
		ft_putchar('\n');
	}
}
