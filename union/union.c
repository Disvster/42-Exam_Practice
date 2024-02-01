/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:56:22 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/30 15:29:37 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int	arr[127] = {0};
	int	i = 0;
	int	c = 0;
	
	while (s1[i])
	{
		c = s1[i];
		if (!(arr[c]))
			arr[c] = 1;	
		i++;
	}
	i = 0;
	while (s2[i])
	{
		c = s2[i];
		if(!(arr[c]))
			arr[c] = 1;	
		i++;
	}
	i = 0;
	//c = 0;
	while (s1[i])
	{
		c = s1[i];
		if (arr[c])
		{
			write(1, &s1[i], 1);
			arr[c] = 0;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		c = s2[i];
		if (arr[c])
		{
			write(1, &s2[i], 1);
			arr[c] = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}
