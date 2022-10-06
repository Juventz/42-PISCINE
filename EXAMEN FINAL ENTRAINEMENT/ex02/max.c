/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:46:04 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/06 18:22:20 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_max(int *tab, unsigned int len)
{
	int max;

	if (len > 0)
	{
		max = tab[len--];
		while (len--)
		{
			if (tab[len] > max)
			max = tab[len];
		}
		return (max);
	}
	return (0);
}

int	main(void)
{
	int	tab[] = {41, 8, 7, 12};
	printf("%d\n", ft_max(tab, 4));
}
