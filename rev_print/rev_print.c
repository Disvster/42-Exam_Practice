/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:42:58 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/30 13:50:38 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc !=  2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
			i++;
		while (i-- > 0)
			write (1, &argv[1][i], 1);
		write(1, "\n", 1);
	}
	return 0;
}
