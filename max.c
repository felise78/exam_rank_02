/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:13:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/06 16:40:54 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	max(int *tab, unsigned int len)
{
	unsigned int	i = 0;

	if (!tab[0])
		return (0);
	while (i < len - 1)
	{
		if (tab[i] > tab[i + 1])
			ft_swap(&tab[i], &tab[i + 1]);
		i++;
	}
	return (tab[len - 1]);
}
