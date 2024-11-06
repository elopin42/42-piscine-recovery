/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:59:38 by elopin            #+#    #+#             */
/*   Updated: 2024/11/06 14:33:18 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	if (nb <= 0)
		return (0);
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

	t = ft_iterative_factorial(5);
	printf("%d", t);
	return 0;
}*/
