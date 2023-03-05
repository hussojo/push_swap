/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/03/05 14:46:41 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> // NULL, exit failure & success, ft_calloc

# include "libft_push_swap/libft.h"

// push_swap.c
int		check_input(char **array);
char	**get_args(char **av, int ac, char **array);
char	**ft_one_arg(char **av, char **array);
char	**ft_many_args(char **av, int ac, char **array);
int		main(int ac, char **av);

// work_stack.c
int		*no_duplicates(int *st_a, int len);
void	set_other_stack(int *sorted, int *st_a, int len);
void	do_checks(int *st_a, int len);
int		*allocate_n_fill_stack(char **array, int len);
void	work_stack(char **array);

// push_swap_utils.c
void	error_msg(char *msg, void *array, int flag);
int		find_pos(int *sorted, int st_a);
int		ready_sorted(int *st_a, int len);
int		*mini_sort(int *array, int len);
int		find_min(int *array, int len);

// array_utils.c
int		*cpy_array(int *source, int *dest, int len);
int		av_count(char **array);
void	ft_set_zero(int *st_a, int len);
void	free_array(char **array);

// work_binaries.c
int		push_rot_bin(int *st_b, int *st_a, int len, int i);
void	sort_bin(int *st_b, int *st_a, int size, int len);
void	work_binaries(int *st_b, int *st_a, int *sorted, int len);

// sort_under_six.c
void	op_sb(int *array);
void	sort_three(int *array, int len);
void	sort(int *array_a, int *array_b, int len);

// push_op.c
void	op_pa(int *array_from, int *array_to, int len);
void	op_pb(int *array_from, int *array_to, int len);
void	move_up(int **array, int len);
void	move_down(int **array);
void	push_op(int *array_from, int *array_to, int len);

// sort_op.c
void	op_sa(int *array);
void	op_rra(int *array, int len);
void	op_ra(int *array, int len);

#endif
