/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:47:02 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/16 09:47:26 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_uppercase(char *str)
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
		if (!(p_atual >= 'A' && p_atual <= 'Z'))
		{
			validacao = false;
			break ;
		}
		indice++;
	}
	return (validacao);
}
