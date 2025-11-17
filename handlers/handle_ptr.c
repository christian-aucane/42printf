/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:55 by caucane           #+#    #+#             */
/*   Updated: 2025/11/17 16:46:55 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"

void	handle_ptr(va_list *args, int *chars_count)
{
	void	*ptr_val;

	ptr_val = va_arg(*args, void *);
	if (!ptr_val)
	{
		ft_putstr("(nil)", chars_count);
		return ;
	}
	ft_putstr("0x", chars_count);
	ft_putnbr_ptr((unsigned long)ptr_val, chars_count);
}
