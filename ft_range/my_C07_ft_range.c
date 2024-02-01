/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:31:41 by macarrei          #+#    #+#             */
/*   Updated: 2024/01/24 21:36:10 by macarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	size = max - min;
	arr = NULL;
	if (min >= max)
		return (NULL);
	arr = (int *) malloc(sizeof(int) * size);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
/*
#include <stdio.h>
int	main()
{
	int	*arr = NULL;
	int i = 0;
	int min = 3;
	int max = 6;
	int size = max - min;
	arr = ft_range(min, max);
	while (i < size){
		printf("%d, ", arr[i]);
		i++;
	}
	//for (int i = 0; i < 2; i++ )
        //   printf("%d ", arr);
	
	free(arr);
	return(0);
	//printf("%d\n"
}*/
