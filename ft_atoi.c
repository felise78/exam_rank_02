/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:17:13 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/05 17:28:43 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int value = 0;

	while (str[i] <= 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1; 
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * sign);

}