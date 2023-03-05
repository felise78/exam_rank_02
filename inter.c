/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:53:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/04 12:33:16 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_in_str(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_solo(char *str, char c, int len)
{
	int i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (i == len)
		return (1);
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int i = 0;
	while (s1[i])
	{
		if (ft_is_in_str(s2, s1[i]) && ft_is_solo(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
	write(1, "\n", 1);
}
