/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischmutz <ischmutz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:31:41 by ischmutz          #+#    #+#             */
/*   Updated: 2023/10/11 10:38:47 by ischmutz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "printf.h"
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_craiseputnbr(long long longie2, char *base2, int baselen)
{
	int		mem;
	int		i;
	int		len;

	len = 0;
	i = 0;
	mem = 1;
	
	char	array[mem];
	if (longie2 < 0)
	{
		write(1, "-", 1);
		longie2 = longie2 * (-1);
	}
	while (longie2 >= 0)
	{
		array[i] = base2[longie2 % baselen];
		longie2 /= baselen;
		i++;
		mem += i;
	}
	len = i;
	while (i >= 0)
	{
		write(1, array + i, 1);
		i--;
	}
	return (len);
}

int	ft_boringputnbr(long long longie, char *base)
{
	return (ft_craiseputnbr(longie, base, ft_strlen(base)));
}

int	main(void)
{
	int	aba;

	aba = 56783;
	return (ft_boringputnbr(aba, "0123456789ABCDEF"));
}

// convert hex: divide by 16, keep remainder, divide quotient until 0.
// each remainder is a hex value

/* Piscine putnbr
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	long	nb_long;

	nb_long = (long) nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = nb_long * (-1);
	}
	if (nb_long >= 0 && nb_long <= 9)
		ft_putchar(nb_long + 48);
	else if (nb_long >= 10)
	{
		ft_putnbr(nb_long / 10);
		ft_putnbr(nb_long % 10);
	}
}*/

/* Vorlesung's code lmao
int	ft_shiupint(va_list liist)
{
	int num;

	num = va_arg(liist, int);
	return (num);
}

int	ft_printd(va_list liist)
{
	char	*output;
	int		a;

	a = ft_shiupint(liist);
	output = ft_itoa(a);
	
	while (*output != '\0')
	{
		write(1, output, 1);
		output++;
	}
	return (ft_strlen(output));
}*/
/* Fabian's explanation:
void printf(char *format, ...)
{
	va_list liist;

	va_start(liist, format);
	
	// loop through all format
		// get data type with va_arg

	va_end(liist);
}

void putnbr(unsigned int)
{
	// print
}

void putstr(char *)
{
	// print
}
*/
