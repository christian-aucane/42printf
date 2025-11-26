/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:47:02 by caucane           #+#    #+#             */
/*   Updated: 2025/11/26 13:28:08 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"

void	handle_char(va_list *arg_ptr, int *chars_count)
{
	int	c;

	c = va_arg(*arg_ptr, int);
	ft_putchar_count((char)c, chars_count);
}
