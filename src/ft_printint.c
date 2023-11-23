/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:21:33 by jalbiser          #+#    #+#             */
/*   Updated: 2023/11/22 15:30:34 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

static int	ft_count(long i)
{
	int	a;

	a = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		a++;
		i = -i;
	}
	while (i > 0)
	{
		i /= 10;
		a++;
	}
	return (a);
}

int	ft_printint(int i)
{
	ft_putnbr_fd(i, 1);
	return (ft_count(i));
}