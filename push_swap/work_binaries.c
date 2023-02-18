/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/18 14:39:39 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void op_ra(int *array)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	temp = array[i];
	while (array[i + 1])
	{
		array[i] = array[i + 1];
		i++;
	}
	array[i] = temp;
	// ft_putstr_fd("ra\n", 1);
	printf("ra\n");
	return ;
}

void	sort_bin(int *st_b, int *st_a, int size, int len)
{
	int i = 0;
	int j = 0;

	while(i < size)
	{
		j = 0;
		while (j < len) //get len
		{
			if ((st_b[i] & i) == 0)
				push_op(st_b, st_a);
			else
				op_ra(st_b);
			j++;
		}
		while (st_a[i] != 0)

		i++;
	}
}


int work_binaries(int *st_b, int *st_a, int *sorted, int len)
{
	int i = 0;
	int largest; // largest number in ORIGINAL inputs
	int size; //the max amount of digits
	// printf("len2 = %d\n", len);
	largest = sorted[len - 1];
	// printf("largest= %d\n", largest);
	size = 0;
	while((largest >> size) != 0)
		size++;
	// printf("size = %d\n", size);
	sort_bin(st_b, st_a, size, len);
	while(i < len)
	{
		printf("st_b[%d] = %d\n", i, st_b[i]);
		i++;
	}
	return (1);
}
