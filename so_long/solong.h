#ifndef	SOLONG_H
#define SOLONG_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "minilibx/mlx.h"

enum {
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

#ifndef	IMG_SIZE_Y
#define IMG_SIZE_Y 48
#endif

#ifndef	IMG_SIZE_X
#define IMG_SIZE_X 48
#endif

typedef	struct s_vars{
	void	*mlx;
	void	*win;
}	t_vars;

typedef	struct s_image
{
	struct s_vars	vars;
	int				x;
	int				y;
	char			*path;
	int				width;
	int				height;
	void			*img;
	char			type;
	
}	t_image;

typedef	struct s_zone
{
	char	name;
	char	*path;
	//char	**matris;
}	t_zone;

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
	char			*path;
	int				width;
	int				height;
	void			*img;
	char			type;
	char 			next_type;
} t_hero;

typedef	struct game
{
	t_vars	vars;
	t_map	map;
	t_hero	hero;
	int		game_over;
	int		move_count;
	char	**matris;
	int 	nx;
	int		ny;
	int		key;// L= -1 R= +1 U= +2 D= -2
	int 	kontrol;
	int		map_sizex;
	int		map_sizey;
	int		coin_count;
	
}	t_game;

//key
int		ft_key_hook(int keycode, t_game *game);
int		ft_key_esc(t_game *game);
void	ft_key_up(t_game *game);
void	ft_key_down(t_game *game);
void	ft_key_left(t_game *game);
void	ft_key_right(t_game *game);

//map
void	ft_map_create(t_game game,char *file);
int		ft_get_map_size_x(char *file);
int		ft_get_map_size_y(char *file);
int	ft_get_mp_size_x(t_game *game);
void	ft_put_map(t_game game, int fd, int i, int j, int x, int y);
int		ft_get_map_coord(int fd);
void	ft_put_image(int x, int y, t_image image, char type);
t_zone	ft_put_zone(char type);
int	ft_get_hero_cord_x(char *file);
int	ft_get_hero_cord_y(char *file);
void ft_matrix_create(t_game *game, char *file);
char *get_next_line(int fd);
void *myfree(void *str);
int	ft_find_coin(char *file);
void	ft_image_change(t_game *game, t_image image, int x, int y);
void	ft_collect_coin(t_game *game, int y, int x);

//deneme
//char	ft_find_next_type(int x, int y, t_image image);

#endif