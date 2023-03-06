/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:51:07 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/06 16:26:50 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	len;
	int	i = 0;

	if (start == end)
	{
		tab = malloc(sizeof(int) * 1);
		tab[0] = start;
	}
	else if (start > end)
	{
		len = start - end + 1;
		tab = malloc(sizeof(int) * len);
		while (start >= end)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	else if (end > start)
	{
		len = end - start + 1;
		tab = malloc(sizeof(int) * len);
		while (start <= end)
		{
			tab[i] = start;
			start++;
			i++;
		}	
	}
	return (tab);
}
/*
#include <stdio.h>

int main (void)
{
	int a = 45;
	int b = 5;
	int i = 0;
	int *tab = ft_range(a, b);

	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
