/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/23 09:35:38 by jhusso           ###   ########.fr       */
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
char	**ft_one_arg(char **av, char **array);
char	**ft_many_args(char **av, int ac, char **array);
int		main(int ac, char **av);

// push_swap_utils.c
int		av_count(char **array);
void	error_msg(char *msg, void *array, int flag);
int		ready_sorted(long *st_a, int len);
long	*mini_sort(long *sorted, int len);
void	ft_set_zero(long *st_a, int len);
void	free_array(char **array);
int		find_min(long *array, int len);

// work_stack.c
int		find_pos(long *sorted, int st_a);
long	*no_duplicates(long *st_a, int len);
long	*do_checks(long *st_a, int len);
long		*allocate_n_fill_stack(char **array, int len);
int		work_stack(char **array);

// work_binaries.c
void	sort_three(long *array);
void	sort_four(long *st_b, long *st_a, int len);
void	sort_bin(long *st_b, long *st_a, int size, int len);
int		work_binaries(long *st_b, long *st_a, long *sorted, int len);

// push_op.c
void	op_pa(long *array_from, long *array_to);
void	op_pb(long *array_from, long *array_to);
void	move_up(long *array);
void	move_down(long *array);
void	push_op(long *array_from, long *array_to);

// sort_op.c
void	op_sa(long *array);
void	op_rra(long *array, int len);
void	op_ra(long *array, int len);

#endif
