/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/21 08:55:49 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> // NULL, exit failure & success, ft_calloc
# include <stdio.h>
# include <stdbool.h> // boolean values

# include "libft_push_swap/libft.h"

// push_swap.c
void	get_position(char **array);
char	**ft_one_arg(char **av, char **array);
char	**ft_many_args(char **av, int ac, char **array);

// push_swap_utils.c
int		av_count(char **array);
void	error_msg(char *msg, void *array, int flag);
int		ready_sorted(int *st_a, int len);
int		*mini_sort(int *sorted, int len);
void	ft_set_zero(int *st_a, int len);
void	free_array(char **array);
int		find_min(int *array, int len);

// work_stack.c
int		find_pos(int *sorted, int st_a);
int		*no_duplicates(int *st_a, int len);
int		*do_checks(int *st_a, int len);
int		*allocate_n_fill_stack(char **array);
int		work_stack(char **array);

// work_binaries.c
void	sort_three(int *array);
void	sort_four(int *st_b, int *st_a, int len);
void	sort_bin(int *st_b, int *st_a, int size, int len);
int		work_binaries(int *st_b, int *st_a, int *sorted, int len);

// push_op.c
void	op_pa(int *array_from, int *array_to);
void	op_pb(int *array_from, int *array_to);
void	move_up(int *array);
void	move_down(int *array);
void	push_op(int *array_from, int *array_to);

// sort_op.c
void	op_sa(int *array);
void	op_rra(int *array);
void	op_ra(int *array);

#endif
