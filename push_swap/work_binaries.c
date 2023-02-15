/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/15 16:07:55 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_bin(int *bin, int size)
// {
// 	int i;

// 	i = 0;
// 	while(i < size)
// 	{

// 	}
// }

int work_binaries(int *st_b, int *sorted, int len)
{
	int *bin;
	int largest; // largest number in ORIGINAL inputs
	int size; //the max amount of digits

	largest = sorted[len - 1];
	st_b = 0;
	bin = (int *)ft_calloc(sizeof(int *), len);
	if(!bin)
		error_msg("Error allocating bin", 1);
	size = 0;
	while((largest>>size) != 0)
		size++;
	printf("size = %d", size);
	// sort_bin(bin, size);
	return (1);
}
