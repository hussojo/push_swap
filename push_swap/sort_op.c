/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:46:29 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/24 10:52:20 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void op_sa(long *array)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;
	ft_putstr_fd("sa\n", 1);
	// printf("sa\n");
	// i = 0;
	// while(array[i])
	// {
	// 	printf("%zu\n", array[i]);
	// 	i++;
	// }
	return ;
}

void op_rra(long *array, int len)
{
	int temp;
	int i;
	int j;

	temp = 0;
	i = 0;
	j = 0;
	while (j < len - 1)
		j++;
	temp = array[j];
	while (j > i)
	{
		array[j] = array[j - 1];
		j--;
	}
	array[i] = temp;
	ft_putstr_fd("rra\n", 1);
	// printf("rra\n");
	// i = 0;
	// while(array[i])
	// {
	// 	printf("%zu\n", array[i]);
	// 	i++;
	// }
	return ;
}

void op_ra(long *array, int len)
{
int temp;
	int i;

	temp = 0;
	i = 0;
	temp = array[i];
	while (i < len - 1)
	{
		array[i] = array[i + 1];
		i++;
	}
	array[i] = temp;
	ft_putstr_fd("ra\n", 1);
	// printf("ra\n");
	// i = 0;
	// while(array[i])
	// {
	// 	printf("%zu\n", array[i]);
	// 	i++;
	// }
	return ;
}
