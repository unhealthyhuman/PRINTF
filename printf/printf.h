/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischmutz <ischmutz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:04:44 by ischmutz          #+#    #+#             */
/*   Updated: 2023/10/09 10:44:08 by ischmutz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF.H
# define PRINTF.H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *fix, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
size_t	ft_strlen(const char *s);

#endif