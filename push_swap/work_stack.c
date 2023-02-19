/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:16:33 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/19 10:27:46 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos(int *sorted, int st_a)
{
	int i;
	int pos;

	i = 0;
	while(sorted[i] != st_a)
		i++;
	pos = i +1;
	return(pos);
}

int	*no_duplicates(int *st_a, int len)
{
	int i = 0;
	int *sorted;

	sorted = (int *)ft_calloc(sizeof(int), len);
	if (!sorted)
	{
		free(sorted);
		error_msg("Error\n", 1);
	}
	sorted[len] = '\0';
	while (i < len)
	{
		sorted[i] = st_a[i];
		i++;
	}
	sorted = mini_sort(sorted, len);
	i = 0;
	while (sorted[i])
	{
		if (sorted[i] == sorted[i + 1])
		{
			free(sorted);
			return (0);
		}
		i++;
	}
	i = 0;
	return (sorted);
}

int	*do_checks(int *st_a, int len)
{
	int *sorted;

	if (!st_a || st_a == NULL)
		error_msg("Error\n", 1);
	if (!ready_sorted(st_a, len))
	{
		free(st_a);
		exit(0);
	}
	sorted = no_duplicates(st_a, len);
	if (!sorted)
	{
		free(st_a);
		error_msg("Error\n", 1);
	}
	return(sorted);
}

int *allocate_n_fill_stack(char **array)
{
	int len;
	int i;
	int num;
	int *st_a;

	len = av_count(array);
	st_a = (int *)ft_calloc(sizeof(int *), len);
	if (!st_a)
		error_msg("Error\n", 1);
	i = 0;
	num = 1;
	while (array[i])
	{
		num = ft_atoi(array[i]);
		if(num == 0 && *array[i] != '0')
			error_msg("Error\n", 1);
		st_a[i] = ft_atoi(array[i]);
		i++;
	}
	free(array);
	return(st_a);
}

int	work_stack(char **array)
{
	int *st_a;
	int *st_b;
	int i = 0;
	int len;
	int *sorted;

	st_a = 0;
	len = av_count(array);
	st_a = allocate_n_fill_stack(array);
	sorted = do_checks(st_a, len);
	st_b = (int *)ft_calloc(sizeof(int *), len);
	if (!st_b)
		error_msg("Error\n", 1);
	while(i < len)
	{
		st_b[i] = find_pos(sorted, st_a[i]);
		i++;
	}
	ft_set_zero(st_a, len);
	i = 0;
	if (!work_binaries(st_b, st_a, sorted, len))
		error_msg("Error\n", 1);
	return (1);
}


