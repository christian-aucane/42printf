/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:10:36 by caucane           #+#    #+#             */
/*   Updated: 2025/11/17 17:10:36 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdint.h>
# include <unistd.h>

void	ft_putchar(char c, int *chars_count);
void	ft_putstr(char *str, int *chars_count);
void	ft_putnbr(int nb, int *chars_count);
void	ft_putnbr_base(unsigned int nb, char *base, int *chars_count);
void	ft_putnbr_ptr(uintptr_t nb, int *chars_count);

#endif
