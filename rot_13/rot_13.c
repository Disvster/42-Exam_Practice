/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:45:59 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/29 16:59:21 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			if((argv[1][i] >= 'A' && argv[1][i] <= 'M') 
					|| (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
			{
				argv[1][i] += 13;
				write(1, &argv[1][i++], 1);
			}
			else if ((argv[1][i] > 'M' && argv[1][i] <= 'Z') 
				|| (argv[1][i] > 'm' && argv[1][i] <= 'z'))
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i++], 1);
			}
			else
				write(1, &argv[1][i++], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
