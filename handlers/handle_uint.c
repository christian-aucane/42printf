/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:41 by caucane           #+#    #+#             */
/*   Updated: 2025/11/26 13:28:08 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"

void	handle_uint(va_list *arg_ptr, int *chars_count)
{
	unsigned int	nb;

	nb = va_arg(*arg_ptr, unsigned int);
	ft_putnbr_base_count(nb, "0123456789", chars_count);
}
