/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:13:59 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/29 17:22:26 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("mine: %d\n", ft_atoi(argv[1]));
	printf("from lib: %d\n", atoi(argv[1]));
	return (0);
}*/
