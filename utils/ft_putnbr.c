/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:35 by caucane           #+#    #+#             */
/*   Updated: 2025/11/17 16:46:35 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putnbr(int nb, int *chars_count)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-', chars_count);
		nbr *= -1;
	}
	if ((nbr >= 0) && (nbr < 10))
		ft_putchar(nbr + '0', chars_count);
	else
	{
		ft_putnbr(nbr / 10, chars_count);
		ft_putnbr(nbr % 10, chars_count);
	}
}
