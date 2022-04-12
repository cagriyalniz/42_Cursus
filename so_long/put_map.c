#include "solong.h"
#include <stdlib.h>


char	ft_get_map_coord(int fd)
{
	char	l;
	int	byt;
	byt = 1;
	
	if(fd < 0)
		return '\0';
	byt = read(fd, &l, 1);
	if(byt == 1){
		return l;

	}
	else{
		return '\0';
	}
}

int	ft_get_map_size_x()
{
	int byt;
	char l;
	int syc;

	syc = 0;
	byt = 1;
	int fd = open("map", O_RDONLY);

	while(byt != 0)
	{
		byt = read(fd, &l, 1);

		if(l == '\n')
			break;
		syc++;
	}

	close(fd);
	return syc;
}

int	ft_get_map_size_y()
{
	int byt;
	char l;
	int syc;
	syc = 0;
	byt = 1;
	int fd = open("map", O_RDONLY);
	while(byt != 0)
	{
		byt = read(fd, &l, 1);
		write(1, &byt, 1);
		if(l == '\n')
			syc++;
		if(l == '\0')
			break;
	}
	close(fd);
	return syc;
}

void	ft_map_create(t_vars vars)
{
	int	i;
	int j;
	t_image	image;
	int	x;
	int	y;
	char c;
	int fd;
	
	fd = open("map", O_RDONLY);
	x = 0;
	y = 0;
	image.vars = vars;
	i = ft_get_map_size_x();
	j = ft_get_map_size_y();
	//while dongusu 25 satir icin ayri bir fonk da yazilacak
	while(j > 0)
	{
		x = 0;
		i = ft_get_map_size_x(); //her seferinde fonk mu calistiracagiz!! :(
		char a = i + 48;
		write(1, &a, 1);
		while(i > 0)
		{	
			c = ft_get_map_coord(fd);
			if(c != '\n' && c != '\0')
			{
				write(1, &c, 1);
				put_image(x, y, &image, c);
				x+=48;
			}
			i--;
			if(c == '\n')
				i++;
		}
		j--;
		y+=48;
	}
	close(fd);
}

