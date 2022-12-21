/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:59:36 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 08:44:12 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	dest_len;
	char			*dest;

	i = 0;
	if (!s)
		return (NULL);
	dest_len = len;
	if (start + len > ft_strlen(s))
		dest_len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		dest_len = 0;
	dest = (char *)malloc (sizeof(char) * (dest_len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < dest_len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int 	main(void)
{
	printf("Antony:%s:\n", ft_substr("Hello Antony Poure", 6, 6));
    printf("Antony Poure:%s:\n", ft_substr("Hello Antony Poure", 6, 12));   
    printf("Antony Poure:%s:\n", ft_substr("Hello Antony Poure", 6, 22));
	printf("Antony Poure:%s:\n", ft_substr("Hello Antony Poure", 20, 12));
	printf("Antony Poure:%s:\n", ft_substr("", 6, 12));   
	return (0);
}*/
