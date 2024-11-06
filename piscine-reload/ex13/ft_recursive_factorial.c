/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:22:59 by elopin            #+#    #+#             */
/*   Updated: 2024/11/06 14:29:39 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_recursive_factorial (nb - 1) * nb);
}
/*
int	main()
{
	int 	t;

	t = ft_recursive_factorial(5);
	printf("%d", t);
	return 0;
}*/
