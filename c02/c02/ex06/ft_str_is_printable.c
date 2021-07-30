/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:07:00 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/16 11:47:17 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_printable(char *str)
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
		if ((p_atual < 32) || p_atual > 126)
		{
			validacao = false;
			break ;
		}
		indice++;
	}
	return (validacao);
}
