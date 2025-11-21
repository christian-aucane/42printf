/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:52:35 by caucane           #+#    #+#             */
/*   Updated: 2025/11/21 10:45:04 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putnbr_ptr(unsigned long nb, int *chars_count)
{
	unsigned long	base_len;
	char			*base;

	base = "0123456789abcdef";
	base_len = 16;
	if (nb >= base_len)
		ft_putnbr_ptr(nb / base_len, chars_count);
	ft_putchar(base[nb % base_len], chars_count);
}
