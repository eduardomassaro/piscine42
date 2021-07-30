/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 08:28:55 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/11 08:32:47 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

// DO NOT SUBMIT ANYTHING BELOW

#include <stdio.h>

int main (void)
{
	char str[] = "TENHOtenho";

	printf("%d\n", ft_strlen(str));
	return (0);
}
