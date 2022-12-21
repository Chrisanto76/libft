/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:33:42 by apoure            #+#    #+#             */
/*   Updated: 2022/12/13 13:09:01 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{

	printf("Test de memset :\n");
	char str[30] = "ABCD EFGH";

	printf("before memset => %s\n", str);

	ft_memset(str, 'x', 3);

	printf("After memset => %s\n", str);

	return (0);
}*/
