/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:06:56 by apoure            #+#    #+#             */
/*   Updated: 2022/12/16 08:34:17 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(sizeof(*new) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	while (*s)
		new[i++] = *s++;
	new[i] = '\0';
	return (new);
}

/*int	main(int ac, char **av)
{
	char	*mine;
	char	*theirs;

	if (ac == 2)
	{
		mine = ft_strdup(av[1]);
		theirs = strdup(av[1]);
		printf(":%s:\n:%s:\n", mine, theirs);
		free (mine);
		free (theirs);
	}
}*/
