/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:26:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/02/27 20:31:51 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rot_13(char c)
{
	if (c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z')
		c = c - 13;
	else if (c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
		c = c + 13;
	write (1, &c, 1);
}

int main (int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			ft_rot_13(av[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
