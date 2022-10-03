/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:52:11 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/03 22:50:51 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat_alpha(char c)
{
	int	i;

	if (c >= 'a' && c <= 'z')
	{
		i = c - 'a' + 1;
		return (i);
	}
	if (c >= 'A' && c <= 'Z')
	{
		i = c - 'A' + 1;
		return (i);
	}
	else
		c = 1;
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		while (*argv[1] != '\0')
		{
			i = repeat_alpha(*argv[1]);
			while (i != '\0')
			{
				write(1, argv[1], 1);
				i--;
			}
			argv[1]++; 
		}
	}
	write(1, "\n", 1);
} 
