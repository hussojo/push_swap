/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/05 14:46:49 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_rot_bin(int *st_b, int *st_a, int len, int i)
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

void	sort_bin(int *st_b, int *st_a, int size, int len)
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
			flag += push_rot_bin(st_b, st_a, len, i);
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

void	work_binaries(int *st_b, int *st_a, int *sorted, int len)
{
	int	size;

	size = 0;
	free(sorted);
	while ((len >> size) != 0)
		size++;
	if (len < 6)
		sort(st_b, st_a, len);
	else
		sort_bin(st_b, st_a, size, len);
}
