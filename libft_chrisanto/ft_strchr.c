/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:16:30 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 07:47:19 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*int	main(void)
{
	const char *s = "Hello World";
	const char c = 'e';
	char *res;

	res = ft_strchr(s, c);
	printf("la chaine qui commence a partir de %c est: %s", c, res);
	return (0);
}*/
