/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:44:28 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/05 16:37:56 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int	i;
	int tab[200] = {0};

	i = 0;
	while (s2[i] != '\0')
	{
		tab[(int)s2[i]] = 1;
		i++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		tab[(int)s1[i]] = 1;
		i++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		if (tab[(int)s1[i]] == 1)
		{
			write(1,&s1[i], 1);
			tab[(int)s1[i]] = 2;
		}
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (tab[(int)s2[i]] == 1)
		{
			write(1, &s2[i], 1);
			tab[(int)s2[i]] = 2;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
