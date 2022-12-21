/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:57:17 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 07:20:28 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_pushdigit(char *s, char c)
{
	char	*str;
	int		i;

	str = (char *)malloc (sizeof(*str) * (ft_strlen(s) + 1 + 1));
	if (!str)
		return (NULL);
	str[0] = c;
	i = 0;
	while (s[i] != '\0')
	{
		str[i + 1] = s[i];
		i++;
	}
	str[i + 1] = '\0';
	free (s);
	return (str);
}

static	int	get_sign(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

char	*ft_itoa(int n)
{
	char		*str;
	char		*s;
	long int	nb;
	int			sign;

	sign = get_sign(n);
	nb = sign * (long int)n;
	s = (char *)malloc (sizeof(*s) * 1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	while (nb > 9)
	{
		str = ft_pushdigit(s, nb % 10 + '0');
		nb = nb / 10;
		s = str;
	}
	str = ft_pushdigit(s, nb + '0');
	if (sign == -1)
	{
		s = str;
		str = ft_pushdigit(s, '-');
	}
	return (str);
}
