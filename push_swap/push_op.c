/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:52:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/20 12:39:43 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void op_pa(int *array_from, int *array_to)
{
	array_to[0] = array_from[0];
	array_from[0] = 0;
	move_up(array_from);
	ft_putstr_fd("pa\n", 1);
}

void op_pb(int *array_from, int *array_to)
{
	array_to[0] = array_from[0];
	array_from[0] = 0;
	move_up(array_from);
	ft_putstr_fd("pb\n", 1);
}

void move_up(int *array)
{
	int i = 0;

	while (array[i + 1])
	{
		array[i] = array[i + 1];
		i++;
	}
	array[i] = 0;
}

void move_down(int *stack)
{
	int len;
	int temp;

	len = 0;
	temp = 0;
	while(stack[len] != 0)
		len++;
	while (len > 0)
	{
		stack[len] = stack[len - 1];
		len --;
	}
	stack[0] = 0;
}

void push_op(int *st_b, int *st_a)
{
	if(st_a[0] != 0)
		move_down(st_a);
	op_pb(st_b, st_a);
	return ;
}


