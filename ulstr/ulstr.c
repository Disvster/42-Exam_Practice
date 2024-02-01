/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:44:25 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/26 11:28:55 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z') 
		return (1);
	else
		return (0);

}

void	ft_ulstr (char *argv1)
{
	int i = 0;
	
	while (argv1[i])
	{
		if (is_alpha(argv1[i]) == 2)
			argv1[i] -= 32;
		else if (is_alpha(argv1[i]) == 1)
			argv1[i] += 32;
		i++;
	}
}

#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc != 2)
		write (1, "\n", 1);
	else
	{	
		ft_ulstr(argv[1]);
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
		write(1, "\n", 1);
		return (1);
	}
	return (0);
	
}
