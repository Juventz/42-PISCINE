/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:56:54 by jaristil          #+#    #+#             */
/*   Updated: 2022/09/30 14:32:54 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}
	
void	ft_inter(char *str, char *str2)
{
	int 	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str[i] == str2[j])
			{
				if (ft_check(str, str[i], i) == 1)
				{
					write(1, &str[i], 1);
				}
			}
			j++;
		}
		i++;
	}
}
			
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}	
