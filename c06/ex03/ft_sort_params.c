/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 04:36:03 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/24 04:36:06 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str_swap(char **s1, char **s2);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		return (-1);
	i = 0;
	while (++i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_str_swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
}

void	ft_str_swap(char **s1, char **s2)
{
	char *swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}
