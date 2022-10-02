/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alphabet.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaristil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:50:32 by jaristil          #+#    #+#             */
/*   Updated: 2022/10/02 13:00:15 by jaristil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_alphabet(void)
{
	{
		write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
