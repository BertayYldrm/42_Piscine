/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:16:35 by beyildir          #+#    #+#             */
/*   Updated: 2022/04/04 22:16:49 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	havuz;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] < tab[i + 1])
			i++;
		else
		{
			havuz = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = havuz;
			i = 0;
		}	
	}
}
