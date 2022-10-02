/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:09:26 by jaristil          #+#    #+#             */
/*   Updated: 2022/09/26 17:34:11 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = -nb;
	}
	else
		num = nb;
	if (num > 9)
	{
		ft_putnbr(num / 10);
		num %= 10;
	}
	ft_putchar(num + '0');
}
/*
int	main(void)
{
	int	nb;

	nb = 42;
	ft_putnbr(nb);
	return (0);
}
*/
