/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/04 14:04:57 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> // NULL, exit failure & success, ft_calloc
// # include <stdio.h>

# include "libft_push_swap/libft.h"

// push_swap.c
int		check_input(char **array);
char	**get_args(char **av, int ac, char **array);
char	**ft_one_arg(char **av, char **array);
char	**ft_many_args(char **av, int ac, char **array);
int		main(int ac, char **av);

// work_stack.c
long	*no_duplicates(long *st_a, int len);
void	set_other_stack(long *sorted, long *st_a, int len);
void	do_checks(long *st_a, int len);
long	*allocate_n_fill_stack(char **array, int len);
void	work_stack(char **array);

// push_swap_utils.c
void	error_msg(char *msg, void *array, int flag);
int		find_pos(long *sorted, int st_a);
int		ready_sorted(long *st_a, int len);
long	*mini_sort(long *array, int len);
int		find_min(long *array, int len);

// array_utils.c
long	*cpy_array(long *source, long *dest, int len);
int		av_count(char **array);
void	ft_set_zero(long *st_a, int len);
void	free_array(char **array);

// work_binaries.c
int		push_rot_bin(long *st_b, long *st_a, int len, int i);
void	sort_bin(long *st_b, long *st_a, int size, int len);
int		work_binaries(long *st_b, long *st_a, long *sorted, int len);

// sort_under_six.c
void	op_sb(long *array);
void	sort_three(long *array, int len);
void	sort(long *array_a, long *array_b, int len);

// push_op.c
void	op_pa(long *array_from, long *array_to, int len);
void	op_pb(long *array_from, long *array_to, int len);
void	move_up(long **array, int len);
void	move_down(long **array);
void	push_op(long *array_from, long *array_to, int len);

// sort_op.c
void	op_sa(long *array);
void	op_rra(long *array, int len);
void	op_ra(long *array, int len);

#endif
