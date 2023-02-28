/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/28 10:33:52 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_rot_bin(long *st_b, long *st_a, int len, int i)
{
	int	flag;

	flag = 0;
	if (((st_b[0] >> i) & 1) == 0)
	{
		push_op(st_b, st_a, len);
		flag++;
	}
	else
		op_ra(st_b, len);
	return (flag);
}

void	sort_bin(long *st_b, long *st_a, int size, int len)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < len)
		{
			flag += push_rot_bin(st_b, st_a, len, i); // rename
			j++;
		}
		while (flag > 0)
		{
			op_pa(st_a, st_b, len);
			flag --;
		}
		if (!ready_sorted(st_b, len))
			exit(0);
		i++;
	}
}

int	work_binaries(long *st_b, long *st_a, long *sorted, int len)
{
	int	size;

	size = 0;
	free(sorted);
	while ((len >> size) != 0)
		size++;
	if (len == 2)
	{
		free(st_a);
		sort_two(st_b);
	}
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
