/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:35:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/02 15:51:14 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_sb(long *array)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;
	ft_putstr_fd("sb\n", 1);
	return ;
}

void	sort_three(long *array, int len)
{
	int	i;

	i = 0;
	while (ready_sorted(array, len))
	{
		if (array[i] > array[i + 1])
			op_sa(array);
		else
			op_rra(array, 3);
	}
	return ;
}

void	sort(long *st_b, long *st_a, int len)
{
	long	min;
	int		mid;
	int		temp;

	while (len > 3)
	{
		min = find_min(st_b, len);
		mid = len / 2;
		temp = st_b[min];
		if (min <= mid)
			while (st_b[0] != temp)
				op_ra(st_b, len);
		if (min > mid)
			while (st_b[0] != temp)
				op_rra(st_b, len);
		push_op(st_b, st_a, len);
		len --;
	}
	sort_three(st_b, len);
	while (st_a[0] != 0)
		op_pa(st_a, st_b, len);
	free (st_b);
	free (st_a);
}
