/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischmutz <ischmutz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:43:40 by ischmutz          #+#    #+#             */
/*   Updated: 2023/10/12 10:32:16 by ischmutz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(void *ptr)
{
	int					i;
	unsigned long long	longptrkey;

	i = 0;
	longptrkey = (unsigned long long) ptr;
	if (ptr == NULL)
		return (write(1, "(nil)", 1));
	write(1, "0x", 2);
	return (ft_boringputnbr(longptrkey, "0123456789abcdef"));
}

/*#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	c;
	char	*filip = &c;
	printf("original: %p\n", filip);
	ft_putptr(filip);
}*/

//when you attempt to print a NULL pointer using the %p format specifier,
//it will typically print "(nil)" or similar representation.

//has to be printed in hexadecimal format