/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:02:26 by elopin            #+#    #+#             */
/*   Updated: 2024/11/06 19:47:53 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	tmp;

	i = 1;
	j = 0;
	while (i < (ac - 1))
	{
		j = 0;
		while (av[i][j] == av[i + 1][j])
			j++;
		if (av[i][j] > av[i + 1][j])
		{
			tmp = av[i][j];
			av[i][j] = av[i + 1][j];
			av[i + 1][j] = tmp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
