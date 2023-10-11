/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischmutz <ischmutz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:24:57 by ischmutz          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:14 by ischmutz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/*int	ft_printstr(va_list liist)
{
	char	*a;

	a = (char)va_arg(liist, char *);
	while (a != NULL)
	{
		write(1, a, 1);
		a++;
	}
	return (ft_strlen(a));
}*/
