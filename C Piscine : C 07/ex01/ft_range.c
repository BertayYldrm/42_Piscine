/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:03:57 by beyildir          #+#    #+#             */
/*   Updated: 2022/04/15 00:09:48 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*d;

	if (min >= max)
		return (0);
	len = max - min;
	d = malloc(len * sizeof(int));
	if (!d)
		return (0);
	i = 0;
	while (i < len)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
