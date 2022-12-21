/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:41:42 by apoure            #+#    #+#             */
/*   Updated: 2022/12/08 14:41:11 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (s < d)
	{
		while (n--)
			*(d + n) = *(s + n);
		return (dest);
	}
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}

/*int   main(void)
{
        char    dest[] = "coucou";
        char    src[] = "kookou";

        ft_memmove(dest, src, 3);
	printf("%s", dest);
}*/
