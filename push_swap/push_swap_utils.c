/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:44:51 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/18 16:44:13 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int av_count(char **array)
{
	int count;

	count = 0;
	while (array[count])
		count++;
	// printf("av_count:%d\n", count); // HOX
	return(count);
}

void error_msg(char *msg, int flag)
{
	ft_putstr_fd(msg, 2);
	exit(flag);
}

int ready_sorted(int *st_a, int len)
{
	int i;

	i = 0;
	while (i < len -1)
	{
		if (st_a[i+1] < st_a[i])
		{
			// printf("not sorted\n");
			return 1;
		}
		i++;
	}
	// printf("sorted\n");
	return 0;
}

int *mini_sort(int *array, int len)
{
	int	temp = 0;
	int i = 0;

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
	i = 0;
	return (array);
}

void	ft_set_zero(int *st_a, int len)
{
	int i;

	i = 0;
	while(i < len)
	{
		st_a[i] = 0;
		i++;
	}
}
