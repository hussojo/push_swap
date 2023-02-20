/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:46:29 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/20 16:42:59 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void op_sa(int *st_a)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	temp = st_a[i];
	st_a[i] = st_a[i + 1];
	st_a[i + 1] = temp;
	ft_putstr_fd("sa\n", 1);
	return ;
}

void op_rra(int *st_a)
{
	int temp;
	int i;
	int j;

	temp = 0;
	i = 0;
	j = 0;
	while (st_a[j + 1])
		j++;
	temp = st_a[j];
	while (j > i)
	{
		st_a[j] = st_a[j - 1];
		j--;
	}
	st_a[i] = temp;
	ft_putstr_fd("rra\n", 1);
	return ;
}

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
