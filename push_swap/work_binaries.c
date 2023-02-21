/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/21 10:14:56 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int *array)
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
			op_rra(array);
		}
	}
	free(array);
	return ;
}

void	sort_four(int *st_b, int *st_a, int len)
{
	int min; // is not index??

	min = find_min(st_b, len);
	if (min == 0)
		push_op(st_b, st_a);
	else if (min == 1)
	{
		op_ra(st_b);
		push_op(st_b, st_a);
	}
	else if (min == 2)
	{
		op_ra(st_b);
		op_ra(st_b);
		push_op(st_b, st_a);
	}
	else if (min == 3)
	{
		op_rra(st_b);
		push_op(st_b, st_a);;
	}
	sort_three(st_b);
	free (st_a);
	op_pa(st_a, st_b);
	int i = 0;
	while(i < 5)
	{
		printf("%d\n", st_b[i]);
		i++;
	}
}

void	sort_bin(int *st_b, int *st_a, int size, int len)
{
	int i = 0;
	int j = 0;

	while(i < size)
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
		if (!ready_sorted(st_b, len))
			exit(0);
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
	if (len == 3)
	{
		free(st_a);
		free(sorted); // check when is sorted needed after this?? should free earlier?
		sort_three(st_b);
	}
	else if (len == 4)
	{
		free(sorted);
		sort_four(st_b, st_a, len);
	}
	else
		sort_bin(st_b, st_a, size, len);
	return (1);
}
