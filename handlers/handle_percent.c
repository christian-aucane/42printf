/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:57 by caucane           #+#    #+#             */
/*   Updated: 2025/11/21 14:33:55 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"

void	handle_percent(va_list *arg_ptr, int *chars_count)
{
	(void)arg_ptr;
	ft_putchar('%', chars_count);
}
