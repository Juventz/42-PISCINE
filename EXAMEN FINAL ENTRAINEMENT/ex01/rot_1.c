/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:32:50 by jaristil          #+#    #+#             */
/*   Updated: 2022/09/29 21:55:17 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_rot_1(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] == 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
		{
			str[i] += 1;
			i++;
		}
		if (( str[i] == 'Z') || (str[i] == 'z'))
		{
			str[i] -= 25;
			i++;
		}
	}
	ft_putstr(str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rot_1(argv[1]);
		write(1, "\n", 1);
	}
}			
