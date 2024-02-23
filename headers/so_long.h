/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:15:25 by chrlomba          #+#    #+#             */
/*   Updated: 2024/02/23 17:07:44 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SO_LONG_H
# define SO_LONG_H

#include "../my_libft/headers/libft.h"
# include "../my_libft/headers/ft_printf.h"
#include "../my_libft/headers/get_next_line.h"

typedef struct s_map
{
	char		**map;
	int			width;
	int			height;
}				t_map;

int		ft_handle_args(int argc, char **argv);
void	ft_init_map(t_map *map, char *file);
void	ft_error(char *msg);
void	ft_check_map(t_map *map);
void	ft_print_map(t_map *map);

# endif
