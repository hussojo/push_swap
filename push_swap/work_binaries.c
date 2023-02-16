/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/16 14:44:20 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_bin(int *st_b, int *st_a, int size)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while(i < size - 1)
	{
		while(st_b[j])
		{

		}
		}
		i++;
	}
}

int work_binaries(int *st_b, int *st_a, int *sorted, int len)
{
	int largest; // largest number in ORIGINAL inputs
	int size; //the max amount of digits
	printf("len2 = %d\n", len);
	largest = sorted[len - 1];
	printf("largest= %d\n", largest);
	size = 0;
	while((largest >> size) != 0)
		size++;
	printf("size = %d\n", size);
	sort_bin(st_b, st_a, size);
	return (1);
}
