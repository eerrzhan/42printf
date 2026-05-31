/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etoktona <etoktona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:39:13 by etoktona          #+#    #+#             */
/*   Updated: 2025/12/15 14:39:33 by etoktona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_rec(unsigned long long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_putptr_rec(n / 16);
	count += ft_print_char(base[n % 16]);
	return (count);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	count += ft_print_str("0x");
	count += ft_putptr_rec(ptr);
	return (count);
}
