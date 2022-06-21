/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:26:18 by cyalniz           #+#    #+#             */
/*   Updated: 2022/06/21 23:46:40 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*ft_toArr(char **s, int counter)
{
	int	*myArr;
	int	i;
	int	j;
	int	k;

	i = 1;
	k = 0;
	j = 0;
	myArr = (int*)malloc(sizeof(int)*counter);
	while(s[i])
	{
		myArr[k] = ft_atoi(&s[i][j]);
		k++;
		i++;
	}
	
	return myArr;
}

int	ft_dupCheck(char **s, int counter)
{
	int	i;
	int	j;
	int	*myArr;

	i = 0;
	//myArr = ft_toArr(s, counter);
	myArr = ft_toArr(s, counter);
	while(i < counter)
	{
			j = i + 1;
			while(j < counter)
			{
				if (myArr[i] == myArr[j])
				{
					printf("duplicate");
					return 0;
				}
				j++;
			}
		i++;
	}
	
	return 1;
}

int	ft_argCheck(char **s)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (ft_isdigit(s[i][j]) != 1 && (s[i][j] != '-'))
			{
				write(1, "arg error\n", 10);
				return 0;
			}
/* 			if(s[i][j] == '-' && ft_isdigit(s[i][j] != 1))
			{
				write(1, "arg error\n", 10);
				return 0;
			} */
		//	printf("%c \n", s[i][j]);
			j++;
		}
		i++;
	}
	
	if (ft_dupCheck(s, i - 1) == 0)
		return 0;
	return 1;
}

int	ft_isSorted(t_struct *stackA)
{
	while (stackA->next)
	{
		if (stackA->value > stackA->next->value)
			return (0);
		stackA = stackA->next;
	}
	return (1);
}

void	ft_lstFree(t_struct **stackA)
{
	t_struct *temp;

	temp = NULL;
	while (*stackA)
	{
		temp = (*stackA)->next;
		free(*stackA);
		*stackA = NULL;
		if (temp == NULL)
			break ;
		*stackA = temp;
	}
}