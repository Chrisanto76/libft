/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:33:18 by apoure            #+#    #+#             */
/*   Updated: 2022/12/13 15:46:49 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;

	i = 0;
	if (!s1)
		return (NULL);
	while (ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[j - 1]))
		j--;
	if (j < i)
		j = i;
	trim = ft_substr(s1, i, j - i);
	return (trim);
}
/*int     main(void)
{
        char    *set;
        char    *strs[5];
	char	*trim;
	int	i;

        set = ".";
	strs[0] = "";
        strs[1] = ".....full.mo..on....";
        strs[2] = "........full. moon. tacos 3 viandes";
        strs[3] = "full. moon. tacos 3. viandes....";
	strs[4] = ".........................";

	i = 0;
	while(i < 5)
	{
		trim = ft_strtrim(strs[i],set);
		printf("%d  :%s:\n", i, trim);
		free (trim);
		i++;
	}

	trim = ft_strtrim(strs[1], "");
	printf ("vide:%s:\n", trim);
        free (trim);
	return (0);
}*/
