/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:13:38 by beyildir          #+#    #+#             */
/*   Updated: 2022/04/06 19:45:27 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bolum;
	int	kalan;

	if (b != 0)
	{
		bolum = *a / *b;
		kalan = *a % *b;
		*a = bolum;
		*b = kalan;
	}
}
