/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:36:16 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/30 13:18:18 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;
	int	c = 0;
	int	arr[127] = {0};

	while (s1[i])
	{
		while (s2[j] != 0 && s1[i] != s2[j])
			j++;
		c = s1[i];
		if (s1[i] == s2[j] && (!(arr[c])))
		{
			write(1, &s1[i], 1);
			arr[c] = 1;
			j = 0;
		}
		else
			j = 0;
		i++;			
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		inter(argv[1],argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}	
