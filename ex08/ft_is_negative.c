/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:23:20 by elopin            #+#    #+#             */
/*   Updated: 2024/11/07 14:55:52 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write (1, &c, 1);
}*/

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar ('P');
	else
		ft_putchar ('N');
}

/*int	main()
{
	ft_is_negative(-4);
	return (0);
}*/
