/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:53:02 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/27 22:53:09 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	auto char *arr = NULL;
	auto int i = 0, j = 0, k = 0; 
	auto int len_sep = ft_strlen(sep);
	if (size == 0)
		return (malloc(sizeof(char)));
	while (i < size)
		j += ft_strlen(strs[i++]);
	arr = malloc(sizeof(char) * j + (len_sep * size - 1) + 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && (size > 1) && (i + 1 < size))
			arr[k++] = sep[j++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int	main()
{
	char	**strs = NULL;
	strs = (char**)malloc(sizeof(char*) * 6);
	char	*sep = "ganza\n";

	strs[0] = "ola";
	strs[1] = "markos";
	strs[2] = "e";
	strs[3] = "manel";
	strs[4] = "sou a norminette. vsf.";

	char *str = NULL;
	str = ft_strjoin(0, strs, sep);
	printf("%s\n", str);
	free (str);
	free(strs);
	return 0;
}*/
