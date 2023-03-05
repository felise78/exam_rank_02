/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:17:50 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/05 16:33:02 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 1)
		return(1);	
	while (n != 0)
	{
		if (n % 2 != 0)
			return(0);
		n = n / 2;
		if (n == 2)
			return(1);
	}
	return (0);
}
