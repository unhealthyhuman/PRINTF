/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischmutz <ischmutz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:14:01 by ischmutz          #+#    #+#             */
/*   Updated: 2023/10/09 11:34:07 by ischmutz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

/*int	ft_printfc(va_list liist)
{
	char	o;

	o = (char)va_arg(liist, int);
	write(1, &o, 1);
	return (1);
}*/
