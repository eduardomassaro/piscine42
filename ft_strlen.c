/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:47:10 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/17 13:24:30 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
		char str[] = "POLVO_PAUL";

		printf("%d\n", ft_strlen(str));
		return (0);
}


int		ft_strlen(char *str)
{	
	int cpmt;
	
	cpmt = 0;
	
	while (str[cpmt])
			cpmt++;
	return (cpmt);
}
