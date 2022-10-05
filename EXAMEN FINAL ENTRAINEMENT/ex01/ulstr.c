/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:25:35 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/04 16:56:12 by jaristil         ###   ########.fr       */
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

void	ft_ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && str[i] >= 'A' && str[i] <= 'Z')
		 	str[i] += 32;
		else if (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	ft_putstr(str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	write(1, "\n", 1);
}
