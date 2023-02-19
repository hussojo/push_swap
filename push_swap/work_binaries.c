/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/19 09:44:04 by jhusso           ###   ########.fr       */
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
	ft_putstr_fd("ra\n", 1);
	return ;
}

void	sort_bin(int *st_b, int *st_a, int size, int len)
{
	int i = 0;
	int j = 0;

	while(i < size && ready_sorted(st_b, len))
	{
		j = 0;
		while (j < len)
		{
			if (((st_b[0]>>i) & 1) == 0)
				push_op(st_b, st_a);
			else
				op_ra(st_b);
			j++;
		}
		while (st_a[0] != 0)
		{
			move_down(st_b);
			op_pa(st_a, st_b);
		}
		i++;
	}
}


int work_binaries(int *st_b, int *st_a, int *sorted, int len)
{
	int largest; // largest number in ORIGINAL inputs
	int size; //the max amount of digits
	largest = sorted[len - 1];
	size = 0;
	while((largest >> size) != 0)
		size++;
	sort_bin(st_b, st_a, size, len);
	return (1);
}
