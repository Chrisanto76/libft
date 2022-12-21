/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:26:01 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 08:02:44 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && !len)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little [j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int     main(void)
{
        char    dest[] = "Foo Baz Bari poo Bari";
        char    src[] = "poo";
        char    *result;

        result = ft_strnstr(dest, src, 15);
		printf("donc : %s\n", (result));
		result = ft_strnstr(dest, src, 16);
        printf("donc : %s\n", (result));
}*/
