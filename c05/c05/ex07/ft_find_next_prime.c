/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 00:35:50 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/24 01:35:28 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int k;

	if (nb == 0 || nb == 1 || nb < 0)
		return (ft_find_next_prime(nb + 1));
	k = 2;
	while (k <= nb / 2)
	{
		if (nb % k == 0)
			return (ft_find_next_prime(nb + 1));
		k++;
	}
	return (nb);
}
