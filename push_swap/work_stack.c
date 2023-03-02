/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:16:33 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/02 16:53:12 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos(long *sorted, int st_a)
{
	int	i;
	int	pos;

	i = 0;
	while (sorted[i] != st_a)
		i++;
	pos = i + 1;
	return (pos);
}

long	*no_duplicates(long *st_a, int len)
{
	int		i;
	long	*sorted;

	i = 0;
	sorted = (long *)ft_calloc(sizeof(long), len);
	if (!sorted)
		error_msg("Error\n", sorted, 1);
	sorted[len] = '\0';
	sorted = cpy_array(st_a, sorted, len);
	sorted = mini_sort(sorted, len);
	if (!sorted)
		error_msg("Error\n", sorted, 1);
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
	return (sorted);
}

long	*do_checks(long *st_a, int len)
{
	long	*sorted;

	if (!ready_sorted(st_a, len))
	{
		if (st_a[0] == st_a[1])
			error_msg("Error\n", st_a, 1);
		free(st_a);
		exit(0);
	}
	sorted = no_duplicates(st_a, len);
	if (!sorted)
		error_msg("Error\n", st_a, 1);
	return (sorted);
}

long	*allocate_n_fill_stack(char **array, int len)
{
	int		i;
	long	num;
	long	*st_a;

	st_a = (long *)ft_calloc(sizeof(long *), len);
	if (!st_a)
		error_msg("Error\n", st_a, 1);
	i = 0;
	num = 1;
	while (i < len)
	{
		num = ft_atol(array[i]);
		if (num == 0 && *array[i] != '0')
		{
			free_array(array);
			error_msg("Error\n", st_a, 1);
		}
		st_a[i] = ft_atol(array[i]);
		i++;
	}
	return (st_a);
}

int	work_stack(char **array)
{
	long	*st_a;
	long	*st_b;
	int		i;
	int		len;
	long	*sorted;

	i = -1;
	len = av_count(array);
	st_a = allocate_n_fill_stack(array, len);
	free_array(array);
	sorted = do_checks(st_a, len);
	st_b = (long *)ft_calloc(sizeof(long *), len);
	if (!st_b)
		error_msg("Error\n", st_b, 1);
	while (++i < len)
		st_b[i] = find_pos(sorted, st_a[i]);
	ft_set_zero(st_a, len);
	if (!work_binaries(st_b, st_a, sorted, len))
	{
		free (st_b);
		free (st_a);
		error_msg("Error\n", sorted, 1);
	}
	return (1);
}
