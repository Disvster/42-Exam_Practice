/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:26:25 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/30 18:09:03 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int unsigned	i = 0;
	int		res = 0;

	if (!len)
		return (0);
	res = tab[0];
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int	arr[10] = {1 , 2, 3, 41, 5, 7, 0, 42, 4, 20};
	printf("%d\n", max(arr, 10));
}*/
