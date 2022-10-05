/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:02:41 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/05 19:15:20 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			alpha_mirror(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
