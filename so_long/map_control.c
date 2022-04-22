#include "solong.h"

int	ft_map_cntrl_elmn_sysi(t_game *game)
{
	int pCount = 0;
	int	eCount = 0;
	int cCount = 0;
	int i = 0;
	int j = 0;

	while(i < game->map_sizey)
	{
		j = 0;
		while(j < game->map_sizex)
		{
			if (game->matris[i][j] == 'P')
				pCount++;
			else if (game->matris[i][j]  == 'C')
				cCount++;
			else if (game->matris[i][j]  == 'E')
				eCount++;
			j++;
		}
		i++;
	}
	if(pCount == 1 && cCount > 0 && eCount > 0 )
		return (1);
	else
		return (0);
}

int	ft_map_cntrl_ust_alt(t_game *game)
{
	int i = 0;

	while(i < game->map_sizex)
	{

			if (game->matris[0][i] != '1')
				{	
					game->error = "haritanın üstü delik";
					return (0);
				}
			if(game->matris[game->map_sizey - 2][i] != '1')
				{
					game->error = "haritanın altı delik";
					return (0);
				}
			printf("%c%c\n",game->matris[0][i], game->matris[game->map_sizey - 2][i]);
		i++;
	}
	return (1);
}

int	ft_map_cntrl_sag_sol(t_game *game)
{
	int i = 0;
	while(i < game->map_sizey - 1)
	{

			if (game->matris[i][0] != '1')
				{	
					game->error = "haritanin sol duvarı delik";
					return (0);
				}
			else if(game->matris[i][game->map_sizex - 1] != '1')
				{
					game->error = "haritanin sağ duvarı delik";
					return (0);
				}
		i++;
	}
	return (1);
}

int	ft_map_cntrl_frkli_elemn(t_game *game)
{
	int i = 0;
	int j = 0;

	while(i < game->map_sizey)
	{
		j = 0;
		while(j < game->map_sizex)
		{
			if (game->matris[i][j] != 'P' && game->matris[i][j] != '0'
			&& game->matris[i][j] != 'E' && game->matris[i][j] != 'C'
			&& game->matris[i][j] != '1')
			{
				game->error = "farkli eleman var";
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_map_control(t_game *game)
{
 	if (ft_map_cntrl_ust_alt(game) == 0)
		return 0;
	else if (ft_map_cntrl_elmn_sysi(game) == 0)
		{
			game->error = "eleman sayisi";
			return 0;
		}
	else if (ft_map_cntrl_sag_sol(game) == 0)
		return 0;
 //	else if (ft_map_cntrl_frkli_elemn(game) == 0)
	//	return 0;
	return 1;
}