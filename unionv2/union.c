/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:44:09 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/20 18:14:26 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f(char c){write(1, &c, 1);}

int	main(int argc, char **argv)
{
	if (argc != 3){f('\n');return (0);}

	int visited[127] = {0};

	int i = 0;
	char c;

	while (argv[1][i])
	{
		c = argv[1][i];
		if (!visited[c])
		{
			f(c);
			visited[c] = 1;
		}	
		i++;
	}

	i = 0;
	while (argv[2][i])
	{
		c = argv[2][i];
		if (!visited[c])
		{
			f(c);
			visited[c] = 1;
		}
		i++;
	}
	return (0);
}
