/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:48:25 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 07:53:18 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*first;
	const char	*last;

	i = 0;
	first = (const char *)s1;
	last = (const char *)s2;
	while (i < n)
	{
		if (first[i] != last[i])
			return ((unsigned char) first[i] - (unsigned char) last[i]);
		i++;
	}
	return (0);
}

/*int   main(void)
{
	int		res;
	void	*s1;
	void	*s2;
        char    str1[] = "coucoub";
        char    str2[] = "coucoucLLLLe";

	s1 = (char *)str1;
	s2 = (char *)str2;
        res = ft_memcmp(s1, s2, 7);
        printf("%d", res );
}*/
