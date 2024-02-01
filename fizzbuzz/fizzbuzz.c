/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:48:49 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/29 13:05:34 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0) 
		{
			write (1, "fizzbuzz\n", 9);
			//i++;
		}
		else if(i % 3 == 0)
		{
			write (1, "fizz\n", 5);
			//i++;
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz\n", 5);
			//i++;
		}
		else
		{
			if(i > 10)
			{
				ft_putchar(i / 10 + 48);
				ft_putchar(i % 10 + 48);
			}
			else
			{
				ft_putchar( i + 48);
			}
			//i++;
			write(1, "\n", 1);
		}
		i++;
	}
}
