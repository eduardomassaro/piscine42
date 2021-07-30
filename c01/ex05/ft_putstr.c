/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 02:00:25 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/12 14:30:25 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	str_length(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void			ft_putstr(char *str)
{
	unsigned int i;
	unsigned int max;

	i = 0;
	max = str_length(str);
	while (i < max)
	{
		write(1, &(str[i]), 1);
		i++;
	}
}
