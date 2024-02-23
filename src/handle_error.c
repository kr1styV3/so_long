/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:22:36 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/23 17:14:22 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	ft_error(char *msg)
{
	ft_printf("Error:(%s)", msg);
	exit(0);
}

void	ft_print_map(t_map *map)
{
	int		y;

	y = 0;
	while (y < map->height)
	{
		ft_printf("%s\n", map->map[y]);
		y++;
	}
}
