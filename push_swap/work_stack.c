/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:16:33 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/15 16:15:36 by jhusso           ###   ########.fr       */
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
		return 0;
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
			return (0);
		i++;
	}
	i = 0;
	// while (st_a[i])
	// {
	// 	printf("sorted[%d] = %d\n", i, sorted[i]); // HOX
	// 	i++;
	// }
	return (sorted);
}

int	*do_checks(int *st_a, int len)
{
	int *sorted;

	if (!st_a || st_a == NULL)
		error_msg("Error alloc\n", 1);
	if (!ready_sorted(st_a, len)) // list is sorted
	{
		free(st_a);
		exit(0);
	}
	sorted = no_duplicates(st_a, len);
	if (!sorted)
		error_msg("Error dup\n", 1);
	printf("done\n");
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
	{
		free(st_a);
		printf("error callocin st_a\n");
		exit(1);
	}
	i = 0;
	num = 1;
	while (array[i])
	{
		num = ft_atoi(array[i]);
		if(num == 0 && *array[i] != '0')
		{
			error_msg("Error in atoi\n", 1);
		}
		st_a[i] = ft_atoi(array[i]);
		i++;
	}
	i = 0;
	while(st_a[i])
	{
		printf("st_a[%d] = %d\n", i , st_a[i]);
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
		error_msg("Error allocating st_b", 1);
	while(i < len) // fill stack b with integers that tell the position of numbers
	{
		st_b[i] = find_pos(sorted, st_a[i]);
		i++;
	}
	printf("Len is = %d\n", len);;
	ft_bzero(st_a, len);
	// i = 0;
	// while(i < len)
	// {
	// 	printf("after bzero st_a[%d] = %d\n", i , st_a[i]);
	// 	i++;
	// }
	if (!work_binaries(st_b, sorted, len))
		error_msg("Error when returning from binaries", 1);
	// i = 0;
	// while(i < len)
	// {
	// 	printf("st_b[%d] = %d\n", i , st_b[i]);
	// 	i++;
	// }
	return (1);
}


