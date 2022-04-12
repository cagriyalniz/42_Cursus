#include "solong.h"

int mouse_hook(int keycode, t_vars *vars)
{

	if(keycode == 2)
	{
		mlx_destroy_window(vars->mlx, vars->win);
	}
	return (0);

}

int key_hook(int keycode, t_vars *vars)
{
	// 53 esc
	if(keycode == 53)
	{	
		mlx_destroy_window(vars->mlx, vars->win);
	}
	return (0);
}
