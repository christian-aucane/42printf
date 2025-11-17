/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:33 by caucane           #+#    #+#             */
/*   Updated: 2025/11/17 16:46:33 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putnbr_base(unsigned int nb, char *base, int *chars_count)
{
	unsigned int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base, chars_count);
	ft_putchar(base[nb % base_len], chars_count);
}
