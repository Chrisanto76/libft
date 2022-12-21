/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 07:56:15 by apoure            #+#    #+#             */
/*   Updated: 2022/12/13 15:51:20 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**clean(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static	char	**ft_display(char **tab, char const *s, char sep)
{
	char const	*tmp;
	int			i;

	tmp = s;
	i = 0;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			tab[i] = ft_substr(s, 0, tmp - s);
			if (tab[i] == NULL)
				clean(tab);
			s = tmp;
			++i;
		}
	}
	tab[i] = NULL;
	return (tab);
}

static int	ft_cpt_word(char const *s, char c)
{
	unsigned int	i;
	int				nb_word;

	i = 0;
	nb_word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			nb_word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nb_word);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_cpt_word(s, c);
	new = (char **)malloc (sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_display(new, s, c);
	return (new);
}

/*int   main(void)
{
	char    s[] = "hello, comment ca va les amis";
	char    c = ' ';
	//char  dest[100];

	char    **cpt = ft_split(s, c);
	if (cpt)
	{
		int i = 0;
		printf("char ** alloue\n");
		while (cpt[i])
		{
			printf("case %d : %s\n", i, cpt[i]);
			free(cpt[i]);
			i++;
		}
		free(cpt);
	}
	else
		printf("le split a envoye NULL");


	//printf("dest = %s\n", dest);
	//printf("Split = %d\n", cpt);
	return (0);
}*/
