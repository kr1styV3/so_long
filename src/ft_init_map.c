/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:21:24 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/23 17:01:33 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	ft_init_map(t_map *map, char *file)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error("Invalid file");
	while (line != NULL)
	{
		line = get_next_line(fd);
		if (map->width == 0)
			map->width = ft_strlen(line);
		map->height++;
		free(line);
	}
	close(fd);
	map->map = malloc(sizeof(char *) * map->height);
	if (!map->map)
		ft_error("Malloc error");
	fd = open(file, O_RDONLY);
	map->height = 0;
	while (line != NULL)
	{
		line = get_next_line(fd);
		map->map[map->height] = ft_strdup(line);
		map->height++;
		free(line);
	}
	close(fd);
}
