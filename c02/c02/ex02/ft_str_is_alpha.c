/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 23:59:49 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/16 09:39:35 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_alpha(char *str)
{
	int		indice;
	bool	validacao;
	char	pos;

	indice = 0;
	validacao = true;
	while (true)
	{
		pos = str[indice];
		if (pos == '\0')
		{
			break ;
		}
		if (!((pos >= 'a' && pos <= 'z') || (pos >= 'A' && pos <= 'Z')))
		{
			validacao = false;
			break ;
		}
		indice++;
	}
	return (validacao);
}
