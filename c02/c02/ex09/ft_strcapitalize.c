/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:56:20 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/16 09:58:43 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{

	int i;
	int credito;
	

	i = 0;
	credito = 1;
	
	while (str[i] != '\0')
	{
		if (check(str[i]))
		{
			if (credito && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ' ';
			else if (!credito && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += ' ';
			credito = 0;
		}
		else
			credito = 1;
		i++;
	}
	return (str);
}
