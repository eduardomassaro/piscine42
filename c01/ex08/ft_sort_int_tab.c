/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:16:36 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/10 03:50:35 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int sorted;
	int i;
	int buffer;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 1;
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				buffer = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = buffer;
				sorted = 0;
			}
			i++;
		}
	}
}
