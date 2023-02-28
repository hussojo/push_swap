/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:35:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/28 10:31:30 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(long *array)
{
	int i = 0;
	if (array[i] > array[i + 1])
		op_sa(array);
	free(array);
	return ;
}

void sort_three(long *array, int flag)
{
	int i = 0;

	while (ready_sorted(array, 3) == 1)
	{
		if (array[i] > array[i+1])
		{
			op_sa(array);
		}
		else
		{
			op_rra(array, 3);
		}
	}
	if (flag == 1)
		free(array);
	return ;
}

void	sort_four(long *st_b, long *st_a, int len, int flag)
{
	int min = 0;

	min = find_min(st_b, len);
	if (min == 0)
		push_op(st_b, st_a, 4);
	else if (min == 1)
	{
		op_ra(st_b, 4);
		push_op(st_b, st_a, 4);
	}
	else if (min == 2)
	{
		op_ra(st_b, 4);
		op_ra(st_b, 4);
		push_op(st_b, st_a, 4);
	}
	else if (min == 3)
	{
		op_rra(st_b, 4);
		push_op(st_b, st_a, 4);
	}
	sort_three(st_b, 0);
	op_pa(st_a, st_b, 4);
	if (flag == 1)
	{
		free (st_a);
		free(st_b);
	}
}

void sort_five(long *st_b, long *st_a, int len)
{
	int min = 0;

	min = find_min(st_b, len);
	if (min == 0)
		push_op(st_b, st_a, 5);
	else if (min == 1)
	{
		op_ra(st_b, 5);
		push_op(st_b, st_a, 5);
	}
	else if (min == 2)
	{
		op_ra(st_b, 5);
		op_ra(st_b, 5);
		push_op(st_b, st_a, 5);
	}
	else if (min == 3)
	{
		op_rra(st_b, 5);
		op_rra(st_b, 5);
		push_op(st_b, st_a, 5);
	}
	else if (min == 4)
	{
		op_rra(st_b, 5);
		push_op(st_b, st_a, 5);
	}
	sort_four(st_b, st_a, 4, 0);
	op_pa(st_a, st_b, 5);
	free (st_a);
	free(st_b);
}
