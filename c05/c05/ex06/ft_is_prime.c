/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 23:03:09 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/23 23:04:55 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int k;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	k = 2;
	while (k <= nb / 2)
	{
		if (nb % k == 0)
			return (0);
		k++;
	}
	return (1);
}