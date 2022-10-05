/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:19:10 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/04 18:07:03 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if (str[i] == '+')
	{
		sign *= 1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
			result = result * 10 + (str[i] - 48);
			i++;
	}
	return (result * sign);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}	
