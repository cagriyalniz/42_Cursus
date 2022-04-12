#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int	ft_get_map_size_x(int fd)
{
	int byt;
	char l;
	int syc;

	syc = 0;
	byt = 1;
	l = '\0';
	while(byt != 0)
	{
		byt = read(fd, &l, 1);
		if(l == '\n')
			break;
		syc++;
	}

	return syc;
}

int	ft_get_map_size_y(int fd)
{
	int byt;
	char *buff = malloc(9999*sizeof(char));
	int syc;

	syc = 0;
	byt = 1;

	while(byt > 0)
	{
		byt = read(fd, buff, 1);
		syc++;
	}
	free(buff);
	return syc;
}

char	ft_get_map_coord(int fd)
{
	static char	l;
	int	byt;
	byt = 1;
	l = '\0';
	byt = read(fd, &l, 1);
	if(byt > 0)
		return l;
	else
		return 'x';
}

int *ft_hero_coord()
{
	int byt;
	char l;
	int y;
	int x;
	int knm[1][2];
	y = 0;
	x = 0;
	byt = 1;
	int fd = open("deneme", O_RDONLY);
	while(byt != 0)
	{
		byt = read(fd, &l, 1);
		write(1, &byt, 1);
		if(l == '\0')
			break;
		if(l == '\n')
			{	
				x = 0;
				y++;
			}
		else if(l != '\n')
			x++;

	}
	close(fd);
	knm[0][0] = x;
	knm[0][1] = y;
	return knm;
}


int main()
{
	int fd = open("deneme", O_RDONLY);
/* 	int x = ft_get_map_size_x(fd);
	int y = ft_get_map_size_y(fd);
	printf("x: %d, y: %d", x, y);
	int i = 0;
	int syc = 0;
	char c;
	while(i < 54)
	{
	c = ft_get_map_coord(fd);
	write(1, &c, 1);
	i++;

	} */
	int k 
	printf("%d", ft_hero_coord());
	
}