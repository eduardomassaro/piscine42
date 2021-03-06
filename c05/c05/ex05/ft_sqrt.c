/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:51:32 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/23 22:52:06 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int k;

	k = 0;
	if (nb == 1)
		return (1);
	while (k <= (nb / 2))
	{
		if ((k * k) == nb)
			return (k);
		else if ((k * k) > nb)
			return (0);
		k++;
	}
	return (0);
}
