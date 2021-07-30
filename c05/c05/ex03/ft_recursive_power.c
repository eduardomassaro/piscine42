/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:46:22 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/23 21:27:43 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;

	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		result = 0;
	else
		result = 1;
	return (result);
}
