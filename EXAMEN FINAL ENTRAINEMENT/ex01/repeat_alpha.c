/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:52:11 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/02 18:17:11 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_letter(char c)
{
	int	i;

	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else
		i = 1;
	return (i);
}

int	main(int argc, char **argv)
{
	int 	i;

	if (argc != 2)
	{
		write(1, 
	}  
