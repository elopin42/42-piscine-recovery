/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:57:37 by elopin            #+#    #+#             */
/*   Updated: 2024/11/07 18:44:24 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	a = 1;
	i = 1;
	while (i <= nb)
	{
		a *= i;
		i++;
	}
	return (a);
}

/*
int	main()
{
	int	t;

	t = ft_iterative_factorial(14);
	printf("%d", t);
	return 0;
}*/
