/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:18:24 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/24 21:31:51 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = NULL;
	dup = (char *) malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
//if no malloc on dup(src is empty), return NULL
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char *str = "duplica isto oh chavale";
	char *dup = ft_strdup(str);
	//printf("%s\n", ft_strdup(av[1]));
	printf("%s\n", dup);
	free (dup);
}*/
