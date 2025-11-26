/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:59 by caucane           #+#    #+#             */
/*   Updated: 2025/11/26 13:28:08 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"

void	handle_int(va_list *arg_ptr, int *chars_count)
{
	int	nb;

	nb = va_arg(*arg_ptr, int);
	ft_putnbr_count(nb, chars_count);
}
