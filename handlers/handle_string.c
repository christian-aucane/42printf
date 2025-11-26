/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:42 by caucane           #+#    #+#             */
/*   Updated: 2025/11/26 13:28:08 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"

void	handle_string(va_list *arg_ptr, int *chars_count)
{
	char	*str;

	str = va_arg(*arg_ptr, char *);
	if (!str)
		str = "(null)";
	ft_putstr_count(str, chars_count);
}
