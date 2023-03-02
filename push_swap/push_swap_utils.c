/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:44:51 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/02 16:42:44 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(char *msg, void *array, int flag)
{
	ft_putstr_fd(msg, 2);
	free (array);
	exit(flag);
}

int	ready_sorted(long *st_a, int len)
{
	int	i;

	i = 0;
	while (i < len -1)
	{
		if (st_a[i + 1] < st_a[i])
			return (1);
		i++;
	}
	return (0);
}

long	*mini_sort(long *array, int len)
{
	int	temp;
	int	i;

	i = 0;
	temp = 0;
	while (i < len - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	return (array);
}

int	find_min(long *array, int len)
{
	int	min;
	int	i;
	int	index;

	index = 0;
	i = 0;
	min = 0;
	min = array[0];
	while (i < len)
	{
		if (min > array[i])
		{
			min = array[i];
			index = i;
		}
		i++;
	}
	return (index);
}
