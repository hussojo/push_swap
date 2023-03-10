/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:16:33 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/05 14:46:51 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*no_duplicates(int *st_a, int len)
{
	int	i;
	int	*sorted;

	i = 0;
	sorted = (int *)ft_calloc(sizeof(int), len);
	if (!sorted)
		error_msg("Error\n", sorted, 1);
	sorted = cpy_array(st_a, sorted, len);
	sorted = mini_sort(sorted, len);
	if (!sorted)
		error_msg("Error\n", sorted, 1);
	i = 0;
	while (i < len)
	{
		if (sorted[i] == sorted[i + 1])
			return (0);
		i++;
	}
	return (sorted);
}

void	set_other_stack(int *sorted, int *st_a, int len)
{
	int	*st_b;
	int	i;

	st_b = (int *)ft_calloc(sizeof(int *), len);
	if (!st_b)
		error_msg("Error\n", st_b, 1);
	i = -1;
	while (++i < len)
		st_b[i] = find_pos(sorted, st_a[i]);
	ft_set_zero(st_a, len);
	work_binaries(st_b, st_a, sorted, len);
}

void	do_checks(int *st_a, int len)
{
	int	*sorted;

	sorted = no_duplicates(st_a, len);
	if (!sorted)
		error_msg("Error\n", st_a, 1);
	if (!ready_sorted(st_a, len))
	{
		free(st_a);
		exit(0);
	}
	set_other_stack(sorted, st_a, len);
}

int	*allocate_n_fill_stack(char **array, int len)
{
	int		i;
	int		num;
	int		*st_a;

	st_a = (int *)ft_calloc(sizeof(int *), len);
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

void	work_stack(char **array)
{
	int	*st_a;
	int	len;

	len = av_count(array);
	if (!len)
	{
		free_array(array);
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	st_a = allocate_n_fill_stack(array, len);
	if (!st_a)
	{
		free_array(array);
		error_msg("Error\n", st_a, 1);
	}
	free_array(array);
	do_checks(st_a, len);
}
