/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:13:21 by beyildir          #+#    #+#             */
/*   Updated: 2022/04/14 10:14:09 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		j;

	j = --ac;
	while (j > 0)
	{
		i = 0;
		while (av[j][i])
		{
			write (1, &av[j][i], 1);
			i++;
		}
		j--;
		write (1, "\n", 1);
	}
}
