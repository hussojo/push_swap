/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:44:51 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/23 09:26:36 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	av_count(char **array)
{
	int count;

	count = 0;
	while (array[count])
		count++;
	return(count);
}

void	error_msg(char *msg, void *array, int flag)
{
	ft_putstr_fd(msg, 2);
	free (array);
	exit(flag);
}

int	ready_sorted(long *st_a, int len)
{
	int i;

	i = 0;
	while (i < len -1)
	{
		if (st_a[i+1] < st_a[i])
			return 1;
		i++;
	}
	return 0;
}

long	*mini_sort(long *array, int len)
{
	int	temp = 0;
	int i = 0;

	while (i < len - 1) // maybe here??
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
	i = 0; // not needed
	return (array);
}

void	ft_set_zero(long *st_a, int len)
{
	int i;

	i = 0;
	while(i < len)
	{
		st_a[i] = 0;
		i++;
	}
}

void	free_array(char **array)
{
	int i = 0;

	while(array[i])
	{
		free (array[i]);
		i++;
	}
	free(array);
}

int	find_min(long *array, int len)
{
	int min = 0;
	int i = 0;
	int index = 0;

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
	return(index);
}
