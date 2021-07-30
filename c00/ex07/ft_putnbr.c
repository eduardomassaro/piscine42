/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:00:25 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/10 04:28:11 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_recursive(long x)
{
	if ((x / 10) > 0)
	{
		ft_recursive(x / 10);
	}
	ft_putchar(x % 10 + 48);
}

void	ft_putnbr(int nb)
{
	long x;

	x = nb;
	if (x < 0)
	{
		ft_putchar('-');
		x = x * -1;
	}
	ft_recursive(x);
}
