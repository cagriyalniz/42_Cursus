#include "solong.h"

/*  int close(int keycode, t_vars *vars)
{	
	keycode = 0;

	mlx_destroy_window(vars->mlx, vars->win);
	return (0);
}

void my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_lengt + x * (data->bits_per_pixel/8));
	*(unsigned int*)dst = color;
}  */


int main(void)
{
//	t_data	img;

	t_vars	vars;
	//t_image	image;
	


	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "cagri");
//	mlx_map(relative_path1, relative_path2, image, vars);	
/* 	image.x = 110;
	image.y = 0;
	image.path = "./image/fire.xpm";
*/
	//image.vars = vars;
	

	ft_map_create(vars);
	ft_move_hero(vars);
	 
	//mlx_hook(vars.win, ON_DESTROY, 0, close, &vars);
	
	//mlx_hook(vars.win, 2, 1L<<0, close, &vars);
	//mlx_mouse_hook(vars.win, mouse_hook, &vars);

	mlx_loop(vars.mlx);
	//free(vars);

}