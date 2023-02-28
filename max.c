/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:13:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/02/28 18:44:26 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	if (!tab[0])
		return (0);
	unsigned int i = 0;
	while (i < len - 1)
	{
		if (tab[i] > tab[i + 1])
			ft_swap(&tab[i], &tab[i + 1]);
		i++;
	}
	return(tab[len - 1]);
}
