/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:23:42 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/15 13:08:54 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_numeric(char *str)
{
	int		indice;
	bool	validacao;
	char	p_atual;

	indice = 0;
	validacao = true;
	while (true)
	{
		p_atual = str[indice];
		if (p_atual == '\0')
		{
			break ;
		}
		if (!(p_atual >= '0' && p_atual <= '9'))
		{
			validacao = false;
			break ;
		}
		indice++;
	}
	return (validacao);
}
