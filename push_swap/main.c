/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:24:00 by jhusso            #+#    #+#             */
/*   Updated: 2023/02/18 17:25:18 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**array;

	// if(ac < 2)
		//write(1, "error", 6);
	array = 0;
	if (ac == 2)
	{
		array = ft_one_arg(av, array);
		if(!array || array[0] == NULL)
		{
			// error_msg("Error allocating ft_one_arg\n", 1);
			printf("Error allocating ft_one_arg\n");
		}
	}
	if (ac > 2)
	{
		array = ft_many_args(av, ac, array);
		if(!array || array[0] == NULL)
		{
			// error_msg("Error allocating ft_many_args\n", 1);
			printf("Error allocating ft_many_args\n");
		}
		// int i = 0;
		// while (array[i])
		// {
		// 	printf("array[%d] = %s\n", i, array[i]);
		// 	i++;
		// }
	}
	if(!work_stack(array))
	{
		// error_msg("Error\n", 1);
		printf("Error\n");
	}
	return (0);
}
