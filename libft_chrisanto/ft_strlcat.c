/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:56:23 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 07:43:33 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	dst_n;
	size_t	n;

	d = dst;
	s = (char *)src;
	n = size;
	while (n-- != '\0' && *d != '\0')
		d++;
	dst_n = d - dst;
	n = size - dst_n;
	if (n == 0)
		return (dst_n + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dst_n + (s - src));
}

/*int	main(void)
{
	char	dst[15] = "rrrrrr";

	printf("%ld\n", ft_strlcat(dst, "lorem ipsum dolor sit amet", 15));
	printf("%ld\n", ft_strlcat(dst, "lorem rrrrrrrrrrrrrrrrrrrr", 15));
	printf("%s\n", dst);
//	printf("%s\n", strlcat(dst, "lorem ipsum dolor sit amet", 15));
}*/
