/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:44:14 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/02 13:33:19 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	a;
	int	b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		write(1, &a, 1);
		a++;
	}
}

int	main(void)
{
	int	a;

	a = 0;
	write(1, &a, 1);
	a++;
}

