/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischmutz <ischmutz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:04:44 by ischmutz          #+#    #+#             */
/*   Updated: 2023/10/11 18:40:47 by ischmutz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *fix, ...);
int		ft_putchar(char c);
int		ft_boringputnbr(long long longie, char *base);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
size_t	ft_strlen(const char *s);

#endif