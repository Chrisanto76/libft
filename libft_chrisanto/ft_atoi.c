/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:00:25 by apoure            #+#    #+#             */
/*   Updated: 2022/12/13 15:32:04 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	put;

	res = 0;
	put = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			put = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
		res = res * 10 + *nptr++ - '0';
	return (res * put);
}

/*int main(int argc, char **argv)
{
    int one;
    int two;

    if (argc == 2)
    {
        one = ft_atoi(argv[1]);
        two = atoi(argv[1]);
        printf("one : %d \t two : %d\n", one, two);
    }
	return (0);
}*/
