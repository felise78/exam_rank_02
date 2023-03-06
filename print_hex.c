/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:45:54 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/06 16:35:32 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb = 0;
	int	i = 0;

	while (str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_printhex(int nb)
{
	char	base[] = "0123456789abcdef";

	if (nb > 16)
		ft_printhex(nb / 16);
	write(1, &base[nb % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_printhex(ft_atoi(av[1]));
	write (1, "\n", 1);
}
