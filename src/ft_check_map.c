/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:03:04 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/23 17:15:55 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	ft_check_map(t_map *map)
{
	int		x;
	int		y;
	int		player;
	int		exit;
	int		collect;

	y = 0;
	player = 0;
	exit = 0;
	collect = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->map[y][x] == 'P')
				player++;
			if (map->map[y][x] == 'E')
				exit++;
			if (map->map[y][x] == 'C')
				collect++;
			x++;
		}
		y++;
	}
	if (player != 1 || exit != 1 || collect < 1)
		ft_error("Invalid map");
}
