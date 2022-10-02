/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:43:10 by jaristil          #+#    #+#             */
/*   Updated: 2022/09/28 00:23:54 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "Cette fonction divise les int pointés par a et b. Le résultat de la division est stocké dans l’int pointé par a. Le résultat du reste de la division est stocké dans l’int pointé par b.";
	printf("%s\n", ft_strupcase(str));
	return (0);
}

