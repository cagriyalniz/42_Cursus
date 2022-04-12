#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
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

typedef struct s_data{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_lengt;
	int		endian;
}	t_data;

typedef struct s_vars{
	void	*mlx;
	void	*win;
}	t_vars;

typedef struct s_image
{
	struct	s_vars vars;
	int		x;
	int		y;
	char	*path;
	int		width;
	int		height;
	void	*image;
	
}	t_image;

typedef	struct s_platform
{
	char	*path;

}	t_platform;

typedef struct	s_zone
{
	char name;
	char *path;
}	t_zone;


unsigned long createRGB(int r, int g, int b);

//hook
int key_hook(int keycode, t_vars *vars);
int mouse_hook(int keycode, t_vars *vars);

//map
int	render_next_frame(void *vars);
void	*put_image(int x, int y, t_image *image, char type);
void	ft_map_create(t_vars vars);
char	ft_get_map_coord(int fd);
int	ft_get_map_size_x();
int	ft_get_map_size_y();
t_zone put_zone(char type);
void ft_move_hero(t_vars vars);
