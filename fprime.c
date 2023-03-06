/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:37:18 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/06 16:52:23 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isprime(int c)
{
	int	i = 2;

	while (i <= 9)
	{
		if (c == i)
			return (1);
		if (c % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_res(int nb)
{
	int	c = 2;

	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (ft_isprime(c) && nb != 0)
	{
		if (nb % c != 0)
		{
			c++;
			while (!ft_isprime(c))
				c++;
		}
		else
		{
			printf("%d", c);
			if (nb / c != 1)
				printf("*");
			nb = nb / c;
			if (nb == 1)
				return ;		
		}
	}	
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (atoi(av[1]) > 0)
			ft_print_res(atoi(av[1]));
	}
	printf("\n");
	return (0);
}
