/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:52:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/16 14:44:17 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void move_down(int *stack)
{
	int len;
	int temp;

	len = 0;
	temp = 0;
	printf("here move_down\n");
	while(stack[len] != 0)
		len++;
	printf("len = %d\n", len);
	while (len > 0)
	{
		stack[len] = stack[len + 1];
		len --;
	}
	stack[0] = 0;
}

void push_op(int *st_b, int *st_a)
{
	if(st_a[0] != 0)
	{
		move_down(st_a);
	}
	else
	{
		st_a[0] = st_b[0];
		st_b[0] = 0;
	}
	int i = 0;
	while (st_b[i])
	{
		printf("after push op st_b[%d] = %d", i, st_b[i]);
		i++;
	}
	return ;
}
