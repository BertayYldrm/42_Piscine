/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildir <beyildir@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:16:14 by beyildir          #+#    #+#             */
/*   Updated: 2022/04/02 20:55:25 by beyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	sayi1;
	char	sayi2;

	sayi1 = 0;
	sayi2 = 0;
	while (sayi1 <= 99)
	{
		sayi2 = sayi1 + 1;
		while (sayi2 <= 99)
		{
			ft_putchar(sayi1 / 10 + 48);
			ft_putchar(sayi1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(sayi2 / 10 + 48);
			ft_putchar(sayi2 % 10 + 48);
			sayi2++;
			if (sayi1 != 98)
				write(1, ", ", 2);
		}
		sayi1++;
	}
}
