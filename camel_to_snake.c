/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:34:03 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/06 16:56:43 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_wordcount(char *str)
{
	int	i = 0;
	int	j = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			j++;
		i++;
	}
	return (j);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

void	ft_print(char *str)
{
	int	i = 0;
	int	len = ft_strlen(str) + ft_wordcount(str);
	char	*phrase;

	phrase = malloc(sizeof(char) * len + 1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			str[i] = str[i] + 32;
		}
		write(1, &str[i], 1);
		i++;
	}
	free(phrase);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_print(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
