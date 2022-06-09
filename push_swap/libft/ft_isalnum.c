/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:43:36 by cyalniz           #+#    #+#             */
/*   Updated: 2022/02/12 15:32:10 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	int	alpha;
	int	digit;

	alpha = ft_isalpha(ch);
	digit = ft_isdigit(ch);
	if (alpha == 1 || digit == 1)
	{
		return (1);
	}
	else
		return (0);
}
