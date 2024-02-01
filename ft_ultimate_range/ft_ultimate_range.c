/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:01:41 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/27 21:05:50 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * size);
	if (!(arr))
		return (-1);
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (size);
}
/*
#include <stdio.h>
int	main()
{
	int **arr;
	int i = 0;
	int min = 3;
	int max = 8;
	int size = 0;
	size = max - min;
	int j;
	//TESTA ISTO DIREITO
	j = ft_ultimate_range(arr, min, max);
	while (i < size){
		printf("%d, ", arr[0][i]);
		i++;
	}
        printf("\n%d", j);
	return(0);
	//printf("%d\n"
}*/
