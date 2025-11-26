/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caucane <christian.aucane@learner.42.tech  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:10:36 by caucane           #+#    #+#             */
/*   Updated: 2025/11/26 13:21:47 by caucane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>

void	ft_putchar_count(char c, int *chars_count);
void	ft_putstr_count(char *str, int *chars_count);
void	ft_putnbr_count(int nb, int *chars_count);
void	ft_putnbr_base_count(unsigned int nb, char *base, int *chars_count);
void	ft_putnbr_ptr_count(unsigned long nb, int *chars_count);

#endif
