/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etoktona <etoktona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:37:45 by etoktona          #+#    #+#             */
/*   Updated: 2025/12/15 14:39:37 by etoktona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	num;
	int		count;
	char	c;

	num = n;
	count = 0;
	c = 0;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		count += ft_print_nbr(num / 10);
	c = (num % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
