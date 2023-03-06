/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:42:48 by hemottu           #+#    #+#             */
/*   Updated: 2023/03/06 16:31:16 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_op(int a, char op, int b)
{
	int	res = 0;

	if (op == '+')
		res = a + b;
	else if (op == '-')
		res = a - b;
	else if (op == '*')
		res = a * b;
	else if (op == '/')
		res = a / b;
	printf("%d", res);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		ft_op(atoi(av[1]), av[2][0], atoi(av[3]));
	}
	printf("\n");
}
