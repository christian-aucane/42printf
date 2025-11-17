/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:47:01 by caucane           #+#    #+#             */
/*   Updated: 2025/11/17 17:17:29 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"

void	handle_hex_upper(va_list *arg_ptr, int *chars_count)
{
	unsigned int	nb;

	nb = va_arg(*arg_ptr, unsigned int);
	ft_putnbr_base(nb, "0123456789ABCDEF", chars_count);
}
