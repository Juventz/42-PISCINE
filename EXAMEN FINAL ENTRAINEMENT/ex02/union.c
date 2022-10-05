/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:44:28 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/05 15:50:36 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *find, char *str)
{
	int	i;
	int tab[200] = {0};

	i = 0;
	while (str[i] != '\0')
	{
		tab[(int)str[i]] = 1;
		i++;
	}
	i = 0;
	while (find[i] != '\0')
	{
		tab[(int)find[i]] = 1;
		i++;
	}
	i = 0;
	while (find[i] != '\0')
	{
		if (tab[(int)find[i]] == 1)
		{
			write(1,&find[i], 1);
			tab[(int)find[i]] = 2;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (tab[(int)str[i]] == 1)
		{
			write(1, &str[i], 1);
			tab[(int)str[i]] = 2;
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
