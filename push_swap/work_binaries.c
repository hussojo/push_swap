/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_binaries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:38:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/16 09:31:43 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_bin(int *st_b, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		if ((st_b[i] & i) != 0)
			i++;
		else
		{
			push_op()
		}

	}
}

int work_binaries(int *st_b, int *sorted, int len)
{
	int largest; // largest number in ORIGINAL inputs
	int size; //the max amount of digits

	largest = sorted[len - 1];
	size = 0;
	while((largest>>size) != 0)
		size++;
	printf("size = %d", size);
	sort_bin(st_b, size);
	return (1);
}
