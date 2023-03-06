/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:02:18 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/06 16:42:32 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	ft_isin(char *str, char c)
{	
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_searchnreplace(char *str, char a, char b)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == a)
			write(1, &b, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 && ft_strlen(av[2]) == 1)
	{
		if (!ft_isin(av[1], av[2][0]))
			ft_putstr(av[1]);
		else
			ft_searchnreplace(av[1], av[2][0], av[3][0]);
	}
	write(1, "\n", 1);
}
