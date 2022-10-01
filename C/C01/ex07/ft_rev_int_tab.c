/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:38:02 by jaristil          #+#    #+#             */
/*   Updated: 2022/09/19 17:56:27 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	mid;

	i = 0;
	c = 0;
	mid = size / 2;
	size -= 1;
	while (i < mid)
	{	
		c = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = c;
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	
	int tab[6] = {7, 3, 5, 8, 9, 22};
	i = 0;
	ft_rev_int_tab(tab,6);
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
