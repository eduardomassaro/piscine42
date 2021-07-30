/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:33:26 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/15 15:43:26 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_lowercase(char *str)
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
		if (!(p_atual >= 'a' && p_atual <= 'z'))
		{
			validacao = false;
			break ;
		}
		indice++;
	}
	return (validacao);
}
