/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:40:48 by jaristil          #+#    #+#             */
/*   Updated: 2022/09/26 21:56:39 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sterlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int	long;

	nb = nbr;
	if ft ( == 1)
	{
		b = ft_strlen(base);
		if (nb < 0)
		{
			nb = -nb
			ft_putchar(-);
		}
		if (nb >= b)
		{
			ft_putnbr_base(nb / b, base);
			ft_putnbr_base(nb % b, base);
		}
		else
			ft_putchar(base[nb]);
	}
}
