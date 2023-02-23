/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/23 10:44:57 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		push_op(st_b, st_a);
	else if (min == 1)
	{
		op_ra(st_b, 4);
		push_op(st_b, st_a);
	}
	else if (min == 2)
	{
		op_ra(st_b, 4);
		op_ra(st_b, 4);
		push_op(st_b, st_a);
	}
	else if (min == 3)
	{
		op_rra(st_b, 4);
		push_op(st_b, st_a);
	}
	sort_three(st_b, 0);
	op_pa(st_a, st_b);
	if (flag == 1)
	{
		free (st_a);
		free(st_b);
	}
	// int i = 0;
	// while(i < 5)
	// {
	// 	printf("%d\n", st_b[i]);
	// 	i++;
	// }
}

void sort_five(long *st_b, long *st_a, int len)
{
	int min = 0;

	min = find_min(st_b, len);
	if (min == 0)
		push_op(st_b, st_a);
	else if (min == 1)
	{
		op_ra(st_b, 5);
		push_op(st_b, st_a);
	}
	else if (min == 2)
	{
		op_ra(st_b, 5);
		op_ra(st_b, 5);
		push_op(st_b, st_a);
	}
	else if (min == 3)
	{
		op_rra(st_b, 5);
		op_rra(st_b, 5);
		push_op(st_b, st_a);
	}
	else if (min == 4)
	{
		op_rra(st_b, 5);
		push_op(st_b, st_a);
	}
	sort_four(st_b, st_a, 4, 0);
	sort_three(st_b, 0);
	op_pa(st_a, st_b);
	free (st_a);
	free(st_b);
}

void	sort_bin(long *st_b, long *st_a, int size, int len)
{
	int i = 0;
	int j = 0;

	while(i < size)
	{
		j = 0;
		while (j < len)
		{
			if (((st_b[0]>>i) & 1) == 0)
			{
				push_op(st_b, st_a);
				len --;
			}
			else
				op_ra(st_b, len);
			j++;
		}
		while (st_a[0] != 0)
		{
			move_down(st_b);
			op_pa(st_a, st_b);
			len ++;
		}
		if (!ready_sorted(st_b, len))
			exit(0);
		i++;
	}
}

int work_binaries(long *st_b, long *st_a, long *sorted, int len)
{
	int largest = 0; // largest number in inputs
	int size; //the max amount of digits

	largest = len;
	size = 0;
	free(sorted);
	while((largest >> size) != 0)
		size++;
	if (len == 3)
	{
		free(st_a);
		sort_three(st_b, 1);
	}
	else if (len == 4)
		sort_four(st_b, st_a, len, 1);
	else if (len == 5)
		sort_five(st_b, st_a, len);
	else
		sort_bin(st_b, st_a, size, len);
	return (1);
}
