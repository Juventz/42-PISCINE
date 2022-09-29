/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:47:36 by jaristil          #+#    #+#             */
/*   Updated: 2022/09/29 19:50:57 by jaristil         ###   ########.fr       */
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

void	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] !='\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M')|| (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] += 13;
			i++;
		}
		if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] -= 13;
			i++;
		}  
	}
	ft_putstr(str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rot_13(argv[1]);
		write(1, "\n", 1);
	}
}
