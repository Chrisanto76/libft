/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 07:42:10 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 07:50:55 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("test de memchr :\n");
	char s[] = "aaaaaZ";
	char sbis[] = "aaaa";
	if (memchr(s, 'Z', 9))
		printf("Le caractere recherche a ete trouve ! ok.\n");
	printf("test de ft_memchr :\n");
	if (ft_memchr(sbis, 'Z', 9))
		printf("Le caractere recherche a ete trouve ! ok.\n");
	else
		printf("FAILED : caractere recherche pas rencontre");
}*/
