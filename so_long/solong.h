/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:12:55 by cyalniz           #+#    #+#             */
/*   Updated: 2022/04/25 10:12:57 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include "minilibx/mlx.h"

# define IMG_SIZE_X 48
# define IMG_SIZE_Y 48

# define RED     	"\x1b[31m"
# define GREEN   	"\x1b[32m"
# define YELLOW  	"\x1b[33m"
# define BLUE    	"\x1b[34m"
# define AMAGENTA 	"\x1b[35m"
# define CYAN    	"\x1b[36m"
# define RESET   	"\x1b[0m"

enum
{
	ON_DESTROY = 17
};

typedef struct s_vars
{
	void	*mlx;
	void	*win;
}	t_vars;

typedef struct s_image
{
	struct s_vars	vars;
	int				x;
	int				y;
	int				width;
	int				height;
	char			type;
	char			*path;
	void			*img;
}	t_image;

typedef struct s_zone
{
	char	name;
	char	*path;
}	t_zone;

typedef struct s_put_map
{
	int	fd;
	int	i;
	int	j;
	int	x;
	int	y;
}	t_put_map;

typedef struct s_map
{
	t_zone	zone;
	t_image	image;
}	t_map;

typedef struct s_hero
{
	struct s_vars	vars;
	int				x;
	int				y;
	int				width;
	int				height;
	char			type;
	char			next_type;
	char			*path;
	void			*img;
}	t_hero;

typedef struct game
{
	t_vars	vars;
	t_map	map;
	t_hero	hero;
	int		pcount;
	int		ecount;
	int		ccount;
	int		game_over;
	int		move_count;
	int		nx;
	int		ny;
	int		key;
	int		kontrol;
	int		map_sizex;
	int		map_sizey;
	int		coin_count;
	int		mp_ct_i;
	int		mp_ct_j;
	char	**matris;
	char	*error;
}	t_game;

t_zone	ft_put_zone(char type);

int		ft_key_hook(int keycode, t_game *game);
int		ft_key_esc(t_game *game);
int		ft_get_map_size_x(char *file);
int		ft_get_map_size_y(char *file);
int		ft_get_mp_size_x(t_game *game);
int		ft_map_cntrl_elmn_sysi(t_game *game);
int		ft_map_control(t_game *game);
int		ft_map_cntrl_ust_alt(t_game *game);
int		ft_map_cntrl_sag_sol(t_game *game);
int		ft_get_map_coord(int fd);
int		ft_find_coin(char *file);
int		ft_get_hero_cord_x(char *file);
int		ft_get_hero_cord_y(char *file);

char	*get_next_line(int fd);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);

void	ft_matrix_create(t_game *game, char *file);
void	*myfree(void *str);
void	ft_image_change(t_game *game, t_image image, int x, int y);
void	ft_collect_coin(t_game *game, int y, int x);
void	ft_key_up(t_game *game);
void	ft_key_down(t_game *game);
void	ft_key_left(t_game *game);
void	ft_key_right(t_game *game);
void	ft_map_create(t_game game, char *file);
void	ft_put_map(t_game game, t_put_map pm);
void	ft_put_image(int x, int y, t_image image, char type);
void	destroy_win(t_game *game);
size_t	ft_strlen(const char *c);

#endif
