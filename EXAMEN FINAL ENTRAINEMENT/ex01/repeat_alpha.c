/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:52:11 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/03 17:00:27 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat_alpha(char c)
{
	int	i;

	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else
		i = 1;
	return (i);
}

int	main(int argc, char **argv)
{
	int 	i;
	int	index;

	if (argc != 2)
	{
		write(1, "\n", 1); 
	}
	while (argv[1][i])
	{
		index = repeat_alpha(argv[1][i]);
		while (index--)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*
ne fonctionne pas
*/
