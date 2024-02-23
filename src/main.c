/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:15:01 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/23 17:08:20 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

int	main(int argc, char **argv)
{
	t_map	map;

	if (!ft_handle_args(argc, argv))
		return (0);
	ft_init_map(&map, argv[1]);
	ft_print_map(&map);
	ft_check_map(&map);
	ft_print_map(&map);
	return (0);
}
