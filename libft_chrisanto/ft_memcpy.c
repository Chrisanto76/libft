/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:20:53 by apoure            #+#    #+#             */
/*   Updated: 2022/12/13 14:05:32 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	str1 = dest;
	str2 = src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}

/*int	main(void)
{
	char	dest[] = "coucou";
	char	src[] = "salut";
	
	ft_memcpy(dest, src, 3);
	printf("%s", dest);
}*/
