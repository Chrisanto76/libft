/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:17:47 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 07:49:22 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int   main(void)
{
        const char *s = "Wesh-salut-Hello-World";
        const char c = '-';
        char *res, *res2;

        res = ft_strrchr(s, c);
        printf("la chaine qui commence a partir de %c est: %s\n", c, res);
		res2 = ft_strrchr(s, 'W');
        printf("la chaine qui commence a partir de W est: %s\n", res2);
        return (0);
}*/
