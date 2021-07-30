/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:45:55 by epagne-m          #+#    #+#             */
/*   Updated: 2019/10/17 19:57:19 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);
int ft_strlen(char *src);

int 	 main(int argc, char **argv)
{
	char *dollysheep;

	if (argc == 0)
		return (0);
	dollysheep = ft_strdup(argv[1]);
	printf("%s\n", dollysheep);
}

char *ft_strdup(char *src)
{
	char *jaiminho;
	int	i;
	
	i = 0;

	jaiminho = malloc(ft_strlen(src) * sizeof(char));
	while(src[i])
	{
		jaiminho[i] = src[i];
		i++;
	}
	jaiminho[i] = '\0';
	return (jaiminho);
}

int ft_strlen(char *src)
{
	int i;
	
	i = 0;
	while(src[i])
	{
		i++;
	}
	return (i);
}
