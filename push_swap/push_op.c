/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:52:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/28 09:11:04 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_pa(long *array_from, long *array_to, int len)
{
	if (array_to[0] != 0)
		move_down(&array_to);
	array_to[0] = array_from[0];
	array_from[0] = 0;
	if (array_from[1] != 0)
		move_up(&array_from, len);
	ft_putstr_fd("pa\n", 1);
	// printf("pa\n");
}

void	op_pb(long *array_from, long *array_to, int len)
{
	array_to[0] = array_from[0];
	array_from[0] = 0;
	move_up(&array_from, len);
	ft_putstr_fd("pb\n", 1);
	// printf("pb\n");
}

void	move_up(long **array, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		(*array)[i] = (*array)[i + 1];
		i++;
	}
	(*array)[i] = 0;
}

void	move_down(long **array)
{
	int	i;

	i = 0;
	while ((*array)[i] != 0)
		i++;
	while (i > 0)
	{
		(*array)[i] = (*array)[i - 1];
		i --;
	}
	(*array)[i] = 0;
}

void	push_op(long *array_from, long *array_to, int len)
{
	if (array_to[0] != 0)
		move_down (&array_to);
	op_pb(array_from, array_to, len);
	return ;
}


