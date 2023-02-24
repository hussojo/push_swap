/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:52:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/24 14:30:58 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void op_pa(long *array_from, long *array_to, int len)
{
	if (array_to[0] != 0)
		move_down(&array_to, len);
	array_to[0] = array_from[0];
	array_from[0] = 0;
	move_up(&array_from, len);
	ft_putstr_fd("pa\n", 1);
}

void op_pb(long *array_from, long *array_to, int len)
{
	array_to[0] = array_from[0];
	array_from[0] = 0;
	move_up(&array_from, len);
	ft_putstr_fd("pb\n", 1);
	// printf("pb\n");
	// int i = 0;
	// while(array_to[i])
	// {
	// 	printf("%zu\n", array_to[i]);
	// 	i++;
	// }
}

void move_up(long **array, int len)
{
	int i = 0;

	while (i < len - 1)
	{
		(*array)[i] = (*array)[i + 1];
		i++;
	}
	(*array)[i] = 0;
}

void move_down(long **array, int len)
{
	// int len;
	int temp;

	// len = 0;
	temp = 0;
	// while((*array)[len] != 0)
	// 	len++;
	while (len > 0)
	{
		(*array)[len] = (*array)[len - 1];
		len --;
	}
	(*array)[0] = 0;
}

void push_op(long *array_from, long *array_to, int len)
{
	if(array_to[0] != 0)
		move_down(&array_to, len);
	op_pb(array_from, array_to, len);
	return ;
}


