/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:24:00 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/19 10:10:55 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**array;

	if(ac < 2)
		error_msg("Error\n", 1);
	array = 0;
	if (ac == 2)
	{
		array = ft_one_arg(av, array);
		if(!array || array[0] == NULL)
			error_msg("Error\n", 1);
	}
	if (ac > 2)
	{
		array = ft_many_args(av, ac, array);
		if(!array || array[0] == NULL)
			error_msg("Error\n", 1);
	}
	if(!work_stack(array)) // doo i need this check?
		error_msg("Error\n", 1);
	return (0);
}
