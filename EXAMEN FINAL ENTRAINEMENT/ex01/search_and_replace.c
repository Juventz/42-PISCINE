/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:33:56 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/04 16:24:34 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if ( argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][i] != '\0')
	{
		if (i >= 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	i = 0;
	while (argv[3][i] != '\0')
	{
		if (i >= 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] ==  argv[2][0])
			argv[1][i] = argv[3][0];
		ft_putchar(argv[1][i]);
		i++;
	}	
}
