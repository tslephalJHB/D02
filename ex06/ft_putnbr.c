/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:20:06 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/10 16:21:30 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putnbr(int nb)
{
    int char_reference;
    char_reference = 48;
    
    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(char_reference + nb);
    }
    else
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}
